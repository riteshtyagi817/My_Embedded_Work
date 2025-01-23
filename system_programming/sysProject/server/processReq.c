#include "../common/dataStructures.h"
#include "declarations.h"
void * processRequest(void *arg){

#ifdef DEBUG
	printf("%s function start\n",__func__);
#endif

	int fifoFd;
	//int flag = 0;
	int bytes_read = 0;
	int bytes_write = 0;
	char strpipeFd[4];
	void *Res = NULL;
        Result *res = NULL;
	int count = 0;
	memset(strpipeFd, '\0',sizeof(strpipeFd));
	pid_t pid;
	int ret = 0;
	Msg msg;
	
	Request *req = (Request *)calloc(1,sizeof(Request));
        if(!req){
             perror("Some Issue during memory alloc in server\n");
	     (*fptrArr[0])("FAILURE");
 	}

	// will need to open fifo here and read the request here 
	Infra *infra = (Infra *) arg;

	fifoFd = open(infra->fifo,O_RDONLY);
	if(!fifoFd){
		perror("Some Issue with fifo open\n");
		(*fptrArr[0])("FAILURE");
	}
	//printf("after open in server\n");
	bytes_read = read(fifoFd, req,sizeof(Request));
	if(bytes_read <= 0){
                        printf("could not read anything.\n");
			sem_post(&infra->pthsem);
			(*fptrArr[0])("FAILURE");

	}


	//close(fifoFd);
	sem_post(&infra->pthsem);
		//printf("Posix thread worked\n");
		//printf("Request read successfully from the fifo\n");
		//printf("Printing the received request\n");
		printf("Request: pid: %ld oper1: %d oper2:%d %c\n",req->pid, req->opr1,
				req->opr2,req->operation);

	// forking child and parent
	pid = fork();
	sprintf(strpipeFd,"%d",*(infra->pipeFd + 0));
	if(pid == 0){

		  printf(" I am in child\n");
		  	printf("req->operation:%c \n",req->operation);
                                switch(req->operation){
					
                                        case '+':
						printf("just before execl\n");
                                                execl("../vendor/adder","adder", strpipeFd,NULL);
						printf("execl issue\n");
                                        break;
                                        case '-':
                                                execl("../vendor/subt","subt", strpipeFd,NULL);
						printf("execl issue\n");
                                        break;
                   			default:
                                        break;

                                }


	}
	else {
			printf(" I am in parent\n");
			printf("req->operation: %c\n",req->operation);
			bytes_write = write(*(infra->pipeFd + 1),req, sizeof(Request));
			if(bytes_write <= 0){
                                        
				printf("could not write any bytes to pipe in server\n");

			}else{
				printf("written %d bytes\n",bytes_write);

			}
			// at this point we need to read the result from shared memory which has been put up by vendor\n");
			
			printf("Printing shmid in server: %d\n",infra->shmid);
			Res = shmat(infra->shmid,(void *)0,0);
			if(!Res){
				perror("could not attach the shared memory in the server\n");
				exit(EXIT_FAILURE);


			}
			sleep(2);
			res = (Result *)Res;
			printf("address attached:%p\n",Res);
			printf("read the data from shared memory\n");
			printf("Displaying the data read from the shared memory\n");
			printf("Pid: %ld and Result:%f\n", res->pid, res->result);
			// will write the data into the message queue
			memset(&(msg.data),'\0',sizeof(msg.data));

			memcpy(&(msg.data),res,sizeof(Result));
			msg.msgType = res->pid;

			ret  = msgsnd(infra->msqId,(void *)&msg,sizeof(msg.data),0);
                        if(ret  < 0){
                        	perror("msgsnd failed\n");
               			exit(EXIT_FAILURE);

                         }
			 printf("Result written to the queue successfully\n");

			
	
	}

#ifdef DEBUG
	printf("%s function end\n",__func__);
#endif

}


