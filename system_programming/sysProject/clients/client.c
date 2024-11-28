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
		memset(&msg, '\0',0);
		memset(&res, '\0',sizeof(Res));
		
		int msqID = msgget((key_t)MSQID,IPC_CREAT|0666);
		ret = msgrcv










			
	}
	else{
		printf("Could not find the fifo created to write\n");
		


	}	
	


	return 0;
#ifdef DEBUG

	printf("%s end\n",__func__);
#endif


}

