#include "../common/dataStructures.h"
#include "declarations.h"
void * processResult(void *arg){

#ifdef DEBUG
	printf("%s function start\n",__func__);
#endif

	Infra *infra = (Infra *)arg;
	Result *res = NULL;
	void *Res = NULL;
	int ret = 0;
	Msg msg;
	// attach the shared memory
	PosixSemSvrVend *semStr = (PosixSemSvrVend *)shmat(infra->shmResultId,(void *)NULL,0);

	sem_init(&(semStr->srvToVend),1,0);
	while(1){

		sem_wait(&(semStr->srvToVend));


		// at this point we need to read the result from shared memory which 			    has been put up by vendor\n");

		printf("Printing shmid in server: %d\n",infra->shmid);
		Res = shmat(infra->shmid,(void *)0,0);
		if(!Res){
			perror("could not attach the shared memory in the server\n");
			exit(EXIT_FAILURE);

		}
		//sleep(2);
		res = (Result *)Res;
		//printf("address attached:%p\n",Res);
		//printf("read the data from shared memory\n");
		//printf("Displaying the data read from the shared memory\n");
		printf("Shared memory read in Server Pid: %ld and Result:%f\n", res->pid, res->result);
		// will write the data into the message queue
		memset(&(msg.data),'\0',sizeof(msg.data));

		memcpy(&(msg.data),res,sizeof(Result));
		msg.msgType = res->pid;
		//printf("Pid: %ld and Result:%f\n", msg.msgType, res->result);
		sem_post(&(semStr->vendToSrv));
		

		ret  = msgsnd(infra->msqId,(void *)&msg,sizeof(msg.data),0);
		if(ret  < 0){
			perror("msgsnd failed\n");
			exit(EXIT_FAILURE);

		}
		printf("[Server] Result written to the queue successfully\n");


	}


#ifdef DEBUG
	printf("%s function end\n",__func__);
#endif

}


