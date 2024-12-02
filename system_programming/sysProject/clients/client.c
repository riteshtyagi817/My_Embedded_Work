#include "../common/headers.h" 
#include "../common/dataStructures.h"
int main(int argc, char *argv[]){

#ifdef DEBUG
	printf("%s start\n",__func__);
#endif
	int fifoFd;
	Msg msg;
	Result res;
	int ret  = 0;
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

		fifoFd = open(MYFIFO,O_WRONLY);
		if(fifoFd < 0){
			perror("Some Issue with fifo open\n");
			exit(EXIT_FAILURE);
		}
		bytes_write = write(fifoFd, req,sizeof(Request));
		if(bytes_write < 0){
			perror("error in write\n");
			exit(EXIT_FAILURE);
		}
		printf("%d bytes written\n",bytes_write);
		sleep(2);
		// will try to read the result from the message queue
		memset(&(msg.data), '\0',sizeof(msg.data));
		memset(&res, '\0',sizeof(Result));
		
		int msqID = msgget((key_t)MSQID,IPC_CREAT|0666);
		if(msqID < 0){
			perror("Could not get the msq id in client\n");
			exit(EXIT_FAILURE);

		}
		ret = msgrcv(msqID,&msg,sizeof(msg.data),getpid(),0);
		if(ret < 0){
			perror("some issue with msgrcv in client\n");
			exit(EXIT_FAILURE);
		}
		printf("%d bytes received in client through msg\n",ret);
		if(ret > 0){
			memcpy(&res,&(msg.data),sizeof(Result));
			printf("we received result as %f and pid %ld\n",res.result,res.pid);

		}










			
	}
	else{
		printf("Could not find the fifo created to write\n");
		


	}	
	


	return 0;
#ifdef DEBUG

	printf("%s end\n",__func__);
#endif


}

