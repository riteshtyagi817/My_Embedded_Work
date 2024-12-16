#include "../common/dataStructures.h"
#include "declarations.h"
 

//struct sembuf semWait = {0,-1,0};
//struct sembuf semSignal = {0,1,0};

static void createPipe(Infra *infra);
static void createFifo(Infra *infra);
static void createMsq(Infra *infra);
static void createShm(Infra *infra);
static void freeInfra(Infra *infra);
static void createSem(Infra *infra);
static void createPthsem(Infra *infra);

void * exitServer(void *arg){

#ifdef DEBUG
	printf("%s start \n",__func__);
#endif
	
	char *msg = (char *)arg;
	if(0 == strncmp(msg,"FAILURE",7)){

		
		exit(EXIT_FAILURE);
	}
	else{
		exit(EXIT_SUCCESS);

	}
	return NULL;
#ifdef DEBUG
	printf("%s end \n",__func__);
#endif
}
void createPthsem(Infra *infra){

#ifdef DEBUG
	printf("%s start \n",__func__);
#endif
	sem_init(&infra->pthsem,0,1);


#ifdef DEBUG
	printf("%s end \n",__func__);
#endif
}
void * createInfra(void *arg){

#ifdef DEBUG
	printf("%s start \n",__func__);
#endif
	
	//freeInfra(infra);
	// Memory allocation for Infra
	Infra *infra = (Infra *)malloc(sizeof(Infra));
	if(!infra){

		perror("Malloc failed while allocating infra\n");
		return fptrArr[0]((void *)"FAILURE");
	}
	memset(infra,'\0',sizeof(Infra));
	
	// pipe creation
	infra->pipeFd = (int *)calloc(2,sizeof(int));
	if(!infra->pipeFd){

		perror("Malloc failed while allocating memory for pipe array\n");
		return fptrArr[0]((void *)"FAILURE");

	}	
	createPipe(infra);


	// FIFO creation
	

	infra->fifo = (char *)calloc(10,sizeof(char));
	if(!infra->fifo){

		perror("Malloc failed while allocating memory for fifo\n");
                return fptrArr[0]((void *)"FAILURE");
	}
	strcpy(infra->fifo,MYFIFO);
	createFifo(infra);

	// message queue creation
	createMsq(infra);

	// shared memory creation
	createShm(infra);
	
	// freeing the infra
	//freeInfra(infra);
	createSem(infra);
	createPthsem(infra);

	return (void *)infra;
#ifdef DEBUG
	printf("%s end \n",__func__);
#endif

}
void createSem(Infra *infra){



	infra->semCli  = semget(SEMCLI, 4,IPC_CREAT|0666);
	if(infra->semCli == -1){

		perror("Issue while creating semcli\n");
		fptrArr[0]((void *)"FAILURE");
	}
	for(int i = 0; i < 4;++i){
		infra->su[i].val = 1;
		if(semctl(infra->semCli, i,SETVAL, infra->su[i]) == -1){
			perror("Some Issue in semctl\n");
			fptrArr[0]((void *)"FAILURE");

		}


	}




}
void createPipe(Infra *infra){

#ifdef DEBUG
	printf("%s start \n",__func__);
#endif
	int ret = pipe(infra->pipeFd);
	if(ret < 0){
		perror("some Issue with Pipe Creation\n");
		fptrArr[0]((void *)"FAILURE");
	} 
	printf("pipe created successfully\n");
#ifdef DEBUG
	printf("%s end \n",__func__);
#endif
	return;
}
void createFifo(Infra *infra){

#ifdef DEBUG
	printf("%s start \n",__func__);
#endif
	int fd = 0;
	if(access(MYFIFO,F_OK)){
		int ret = mkfifo(MYFIFO,0666);
		if(ret < 0){
			
			if(errno == EEXIST){
				perror("Fifo already exists\n");
				exit(EXIT_FAILURE);
			}
			else if(errno ==  ENOENT){

				perror("FIFO path directory not present\n");
				exit(EXIT_FAILURE);
			}	
		}	
	}else {

		perror("Process cannot access this file  path\n");
		exit(EXIT_FAILURE);
	}
	printf("Fifo has been created\n");
	system("ipcs");
	
	return;


#ifdef DEBUG
	printf("%s end \n",__func__);
#endif
}

void createMsq(Infra *infra){

#ifdef DEBUG
	printf("%s start \n",__func__);
#endif
	int msqid = msgget((key_t)MSQID,IPC_CREAT|0666);
	if(msqid < 0){
		perror("Message Queue could not be created\n");
		exit(EXIT_FAILURE);

	}
	printf("Message Queue got created\n");
	system("ipcs");
	infra->msqId = msqid;
	return;

#ifdef DEBUG
	printf("%s end \n",__func__);
#endif
}
void createShm(Infra *infra){

#ifdef DEBUG
	printf("%s start \n",__func__);
#endif
	int shmid = shmget((key_t)SHDMID,sizeof(Result),IPC_CREAT|0666);
	if(shmid < 0){

		perror("Shared memory could not be created\n");
		exit(EXIT_FAILURE);
	}
	printf("Shared memory got created\n");
	system("ipcs");
	infra->shmid = shmid;
	return;


#ifdef DEBUG
	printf("%s end \n",__func__);
#endif
}
void freeInfra(Infra *infra){

#ifdef DEBUG
	printf("%s start \n",__func__);
#endif
	system("rm ../myFiFo");
	system("ipcrm -Q 24");
	system("ipcrm -M 26");


#ifdef DEBUG
	printf("%s end \n",__func__);
#endif

}



