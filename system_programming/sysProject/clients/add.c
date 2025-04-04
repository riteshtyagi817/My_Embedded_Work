#include "../common/headers.h" 
#include "../common/dataStructures.h"

int main(int argc, char *argv[]){

#ifdef DEBUG
	LOG("start");
#endif
	struct sembuf semWait;
	struct sembuf semSignal;
	int fifoFd;
	Msg msg;
	int semCli = 0;
	int ret = 0;
	Result res;
	//int ret  = 0;
	//int semCli = 0;
	int bytes_write;
	Request *req = (Request *)calloc(1,sizeof(Request));
	if(!req){
		perror("some Issue with client memory allocation\n");
		exit(EXIT_FAILURE);	

	}
	
	req->pid = getpid();
	req->opr1 = 34;
	req->opr2 = 45;
	req->operation  = '+';
	
	if(!access(MYFIFO,F_OK)){


		// we can treat this as a critical section for multiple processes
		// to use system V semaphore
	
		semCli = semget(SEMCLI,4,IPC_CREAT|0666);
		if(semCli == -1){

			perror("Some issue with semget in add.c\n");
			exit(EXIT_FAILURE);

		}

		//sleep(2);
		semWait.sem_num = 0;
		semWait.sem_op = -1;
		semWait.sem_flg = SEM_UNDO;

		ret = semop(semCli,&semWait,1);
		if(ret < 0){
			LOG("some issue with semop\n");
			exit(EXIT_FAILURE);

		} 
		fifoFd = open(MYFIFO,O_WRONLY);
		if(fifoFd < 0){
			perror("Some Issue with fifo open\n");
			exit(EXIT_FAILURE);
		}
		LOG("inside critical section process id: %d\n",getpid());
		bytes_write = write(fifoFd, req,sizeof(Request));
		if(bytes_write < 0){
			perror("error in write\n");
			exit(EXIT_FAILURE);
		} 
		semSignal.sem_num = 0;
		semSignal.sem_op = 1;
		semSignal.sem_flg = SEM_UNDO;
		
		if(semop(semCli, &semSignal,1) == -1){
			perror("some issue with semop\n");
			exit(EXIT_FAILURE);
		} 

		LOG("%d bytes written\n",bytes_write);
		
		// reading the result from the message queue

		
	
		
		// will try to read the result from the message queue
		//memset(&(msg.data), '\0',sizeof(msg.data));

		memset(&(msg), '\0',sizeof(msg));
		memset(&res, '\0',sizeof(Result));
		
		int msqID = msgget((key_t)MSQID,IPC_CREAT|0666);
		if(msqID < 0){
			perror("Could not get the msq id in client\n");
			exit(EXIT_FAILURE);

		}
		semCli = semget(SEMCLI,4,IPC_CREAT|0666);
		if(semCli == -1){

			perror("Some issue with semget in add.c\n");
			exit(EXIT_FAILURE);

		}
		//sleep(5);
		semWait.sem_num = 1;
		semWait.sem_op = -1;
		semWait.sem_flg = SEM_UNDO;
		ret = semop(semCli,&semWait,1);
		if(ret < 0){
			LOG("some issue with semop\n");
			exit(EXIT_FAILURE);

		} 
		//ret = msgrcv(msqID,&msg,sizeof(msg.data),getpid(),IPC_NOWAIT);
		ret = msgrcv(msqID,&msg,sizeof(msg.data),getpid(),0);
		if(ret < 0){
			LOG("we could not get pid %d data\n",getpid()); 
			perror("some issue with msgrcv in client\n");
			exit(EXIT_FAILURE);
		}
		semSignal.sem_num = 1;
		semSignal.sem_op = 1;
		semSignal.sem_flg = SEM_UNDO;	
		if(semop(semCli, &semSignal,1) == -1){
			perror("some issue with semop\n");
			exit(EXIT_FAILURE);
		} 
		LOG("%d bytes received in client through msg\n",ret);
		if(ret > 0){
			memcpy(&res,&(msg.data),sizeof(Result));
			LOG("we received result as %f and pid %ld\n",res.result,res.pid);

		}




		
			
	}
	else{
		LOG("Could not find the fifo created to write\n");
		


	}	
	


	return 0;
#ifdef DEBUG

	LOG("end");
#endif


}

