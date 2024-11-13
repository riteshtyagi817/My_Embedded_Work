#include "declarations.h"


static void createPipe(Infra *infra);
static void createFifo(Infra *infra);
static void createMsq(Infra *infra);
static void createShm(Infra *infra);

void * createInfra(void *arg){

#ifdef DEBUG
	printf("%s start \n",__func__);
#endif
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

	createMsq(infra);
	createShm(infra);
	freeInfra(infra);
#ifdef DEBUG
	printf("%s end \n",__func__);
#endif

}
void createPipe(Infra *infra){

#ifdef DEBUG
	printf("%s start \n",__func__);
#endif
	int ret = pipe(infra->pipeFd);
	if(ret < 0){
		perror("some Issue with Pipe Creation\n");
		return fptrArr[0]((void *)"FAILURE");
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
	fd = open(MYFIFO,O_RDWR);
	if(fd < 0){

		perror("could not open the fifo\n");
		exit(EXIT_FAILURE);
	}
	infra->fifoDsc = fd;
	return;


#ifdef DEBUG
	printf("%s end \n",__func__);
#endif
}

void createMsq(Infra *infra){

#ifdef DEBUG
	printf("%s start \n",__func__);
#endif
	int msqid = msgget((key_t)24,IPC_CREAT);
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
	int shmid = shmget((key_t)26,4096,IPC_CREAT);
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
	system("rm ./srvFiFo");
	system("ipcrm -Q 24");
	system("ipcrm -M 26");


#ifdef DEBUG
	printf("%s end \n",__func__);
#endif

}



