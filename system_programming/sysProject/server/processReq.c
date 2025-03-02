#include "../common/dataStructures.h"
#include "declarations.h"
void * processRequest(void *arg){

#ifdef DEBUG
	LOG("%s function start\n",__func__);
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
	//LOG("after open in server\n");
	bytes_read = read(fifoFd, req,sizeof(Request));
	if(bytes_read < 0){
                        LOG("could not read anything.\n");
			sem_post(&infra->pthsem);
			(*fptrArr[0])("FAILURE");

	}
	


	//close(fifoFd);
	sem_post(&infra->pthsem);
		//LOG("Posix thread worked\n");
		//LOG("Request read successfully from the fifo\n");
		//LOG("Printing the received request\n");
		LOG("Request: pid: %ld oper1: %d oper2:%d %c\n",req->pid, req->opr1,
				req->opr2,req->operation);

	// forking child and parent
	pid = fork();
	sprintf(strpipeFd,"%d",*(infra->pipeFd + 0));
	if(pid == 0){

		  LOG(" I am in child\n");
		  	LOG("req->operation:%c \n",req->operation);
                                switch(req->operation){
					
                                        case '+':
						LOG("just before execl\n");
                                                execl("../vendor/adder","adder", strpipeFd,NULL);
						LOG("execl issue\n");
                                        break;
                                        case '-':
                                                execl("../vendor/subt","subt", strpipeFd,NULL);
						LOG("execl issue\n");
                                        break;
                   			default:
                                        break;

                                }


	}
	else {
			LOG(" I am in parent\n");
			LOG("req->operation: %c\n",req->operation);
			pthread_mutex_lock(&infra->mtx);
			bytes_write = write(*(infra->pipeFd + 1),req, sizeof(Request));	
			pthread_mutex_unlock(&infra->mtx);
			if(bytes_write <= 0){
                                        
				LOG("could not write any bytes to pipe in server\n");

			}else{
				LOG("written %d bytes\n",bytes_write);

			}
			
	
	}

#ifdef DEBUG
	LOG("%s function end\n",__func__);
#endif

}


