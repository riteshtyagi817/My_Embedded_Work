#include "../common/dataStructures.h"
#include "../common/headers.h"
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
	pthread_t tid;
	Request *req = (Request *)calloc(1, sizeof(Request));
	if(!req){

		perror("calloc failed in adder\n");
		exit(EXIT_FAILURE);
	}	
	bytes_read = read(pipeFd, req, sizeof(Request));
	if(bytes_read <= 0){
		printf("could not read anything\n");
		exit(EXIT_FAILURE);

	}
	printf("Request received from server\n");
	printf("Request:\n pid: %ld  opr1: %d opr2: %d operation: %c\n",req->pid, req->opr1, 	    req->opr2,req->operation);





	// getting the shared memory id and then write the response to it
	
	
	shmid = shmget((key_t)SHDMID, sizeof(Result),IPC_CREAT|0666);
	printf("Printing shmid in vendor 1:%d\n", shmid);
	if(shmid < 0){
		perror("could not get shared memory id in vendor\n");
		exit(EXIT_FAILURE);

	}
	printf("Printing shmid in vendor:%d\n", shmid);
	Res = shmat(shmid, (void *)0,0);
	if(!Res){
		perror("could not attach the memory in vendor\n");
		exit(EXIT_FAILURE);
	}

	res = (Result *)Res;
	printf("address attached in vendor:%p\n", res);
	res->pid = req->pid;
	res->result = req->opr1 + req->opr2;

	int ret = pthread_create(&tid, NULL,writeSharedMemory,(void *)res);
	if(ret != 0){

		perror("some issue in thread creation\n");
		exit(EXIT_FAILURE);
	}

	printf("Written the result to shared memory: pid : %ld and result: %f\n",res->pid, res->result);

	sleep(2);

#ifdef DEBUG
	printf("%s end\n",__func__);
		
#endif

}
