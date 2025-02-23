#include "../common/dataStructures.h"
#include "../common/headers.h"
void *writeSharedMemory(void *arg);
int main(int argc, char *argv[]){

#ifdef DEBUG
	printf("%s start\n", __func__);
#endif	

	printf("vendor started\n");
	int pipeFd = atoi(argv[1]);
	int bytes_read = 0;
	int shmid = 0;
	char *data ;
	void *Res = NULL;
	Result *res = NULL;
	int semCli = 0;
	int ret  = 0;
	pthread_attr_t attr;
	pthread_attr_init(&attr);
	struct sembuf semWait;
	struct sembuf semSignal;
	pthread_t tid;
	Request *req = (Request *)calloc(1, sizeof(Request));
	if(!req){

		perror("calloc failed in adder\n");
		exit(EXIT_FAILURE);
	}
	semCli = semget(SEMCLI,4,IPC_CREAT|0666);
        if(semCli == -1){
		perror("Some issue with semget in add.c\n");
		exit(EXIT_FAILURE);

        }
	semWait.sem_num = 2;
	semWait.sem_op = -1;
	semWait.sem_flg = SEM_UNDO;
	ret = semop(semCli,&semWait,1);
	if(ret < 0){
		printf("some issue with semop\n");
		exit(EXIT_FAILURE);

	}
	bytes_read = read(pipeFd, req, sizeof(Request));
	if(bytes_read <= 0){
		printf("could not read anything\n");
		exit(EXIT_FAILURE);

	}
	semSignal.sem_num = 2;
	semSignal.sem_op = 1;
	semSignal.sem_flg = SEM_UNDO;
	ret = semop(semCli,&semSignal,1);
	if(ret < 0){
		printf("some issue with semop\n");
		exit(EXIT_FAILURE);

	}
	printf("Request received from server\n");
	printf("Request:\n pid: %ld  opr1: %d opr2: %d operation: %c\n",req->pid, req->opr1, 	    req->opr2,req->operation);

	res = (Result *)calloc(1,sizeof(Result));
	if(!res){
		perror("calloc failed\n");
		exit(EXIT_FAILURE);
	}

	res->pid = req->pid;
	res->result = req->opr1 + req->opr2;
 
	pthread_attr_setdetachstate(&attr,PTHREAD_CREATE_JOINABLE);

	ret = pthread_create(&tid, &attr,writeSharedMemory,(void *)res);
	if(ret != 0){

		perror("some issue in thread creation\n");
		exit(EXIT_FAILURE);
	}

	pthread_join(tid,NULL);
	printf("Written the result to shared memory: pid : %ld and result: %f\n",res->pid, res->result);

	//sleep(2);

#ifdef DEBUG
	printf("%s end\n",__func__);
		
#endif

}
void *writeSharedMemory(void *arg){

	Result *Res = NULL;
	Result *res = NULL;
	res = (Result *)arg;
	struct sembuf semWait;
	struct sembuf semSignal;
	
	int semCli = 0;

	int ret = 0;

	//int shmid = shmget(SHDPOSIX,sizeof(sem_t),IPC_CREAT|0666);
	int shmid = shmget(SHDPOSIX,sizeof(PosixSemSvrVend),IPC_CREAT|0666);
//	sem_t *semph = shmat(shmid,(void *)0,0);
	PosixSemSvrVend  *semStr = shmat(shmid,(void *)0,0);
	sem_init(&(semStr->vendToSrv),1,0);
	// getting the shared memory id and then write the response to it
	
	
	shmid = shmget((key_t)SHDMID, sizeof(Result),IPC_CREAT|0666);
	printf("Printing shmid in vendor 1:%d\n", shmid);
	if(shmid < 0){
		perror("could not get shared memory id in vendor\n");
		exit(EXIT_FAILURE);

	}
	printf("Printing shmid in vendor:%d\n", shmid);
	Res = (Result *)shmat(shmid, (void *)0,0);
	if(!Res){
		perror("could not attach the memory in vendor\n");
		exit(EXIT_FAILURE);

	}
	
	semCli = semget(SEMCLI,4,IPC_CREAT|0666);
        if(semCli == -1){
 
		perror("Some issue with semget in add.c\n");
		exit(EXIT_FAILURE);
 	}

	semWait.sem_num = 3;
	semWait.sem_op = -1;
	semWait.sem_flg = SEM_UNDO;

	ret = semop(semCli, &semWait,1);
	if(ret < 0){
		 printf("some issue with semop\n");
                 exit(EXIT_FAILURE);


	}
	Res->pid = res->pid;
	Res->result = res->result;
	printf("[vendor] copied the result to Res in vendor: pid: %ld , result: %f\n",Res->pid,Res->result);
	sem_post(&(semStr->srvToVend));
	sem_wait(&(semStr->vendToSrv));
	semSignal.sem_num = 3;
	semSignal.sem_op = 1;
	semSignal.sem_flg = SEM_UNDO;

	ret = semop(semCli, &semSignal,1);
	if(ret < 0){
		 printf("some issue with semop\n");
                 exit(EXIT_FAILURE);


	}


	printf("[vendor]Written result into shared memory(vendor)\n");

	//sem_post(semph);
	//sem_post(semph);


}
