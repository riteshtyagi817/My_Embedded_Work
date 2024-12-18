#include "declarations.h"
#include "../common/dataStructures.h"
int main(int agrc, char *argv[]){

#ifdef DEBUG 
	printf("%s %d start %s\n",__FILE__,__LINE__,__func__);
#endif
	void *Res = NULL;
	Result *res = NULL;
	init();
	pid_t pid;
	Infra *infra = NULL;
	int bytes_read = 0;
	//Infra *infra = NULL;
	int bytes_write = 0;
	int ret = 0;
	pthread_t tid;
	char strpipeFd[4];
	Msg msg;
	memset(strpipeFd, '\0',sizeof(strpipeFd));
	infra = (Infra *)(*fptrArr[1])(NULL);
	if(!infra){
		perror("Some issue during createInfra\n");
		(*fptrArr[0])("FAILURE");	

	}

	while(1){

		if(sem_wait(&infra->pthsem) == -1){

			perror("Some issue with sem_wait in server program\n");
			(*fptrArr[0])("FAILURE");
		}
		ret = pthread_create(&tid, NULL, (*fptrArr[2]), (void *)infra);
		if(ret != 0){
			perror("Some issue with pthread creation in server\n");
			(*fptrArr[0])("FAILURE");
		}




	}
	/*
		
	while(1){

		fifoFd = open(infra->fifo,O_RDONLY);
		if(!fifoFd){
			perror("Some issue with fifo open\n");
			(*fptrArr[0])("FAILURE");
		}
		bytes_read = read(fifoFd, req, sizeof(Request));
		if(bytes_read <= 0){
			printf("could not read anything.\n");

		}
		else{
			printf("Request read successfully from the fifo\n");
			printf("Printing the received request\n");
			printf("Request: pid: %ld oper1: %d oper2:%d %c\n",req->pid, req->opr1,
					req->opr2,req->operation);

		
			// will pass this request to child
			pid = fork();
			 
			sprintf(strpipeFd,"%d",*(infra->pipeFd + 0));
			if(0 == pid){
				printf(" I am in child\n");
				switch(req->operation){

					case '+':
						execl("../vendor/adder","adder", strpipeFd,NULL);
						
						
					break;

					case '-':
						execl("../vendor/subt","subt", strpipeFd,NULL);

					break;

					default:
					break;

				}


			}
			else{

				printf(" I am in parent\n");
				bytes_write = write(*(infra->pipeFd + 1),req, sizeof(Request));
				if(bytes_write <= 0){
					
					printf("could not write any bytes to pipe in server\n");

				}
				else{
					printf("written %d bytes\n",bytes_write);

				}
				sleep(2);

			*/



				// at this point we need to read the result from shared memory which has been put up by vendor\n");
			
				printf("Printing shmid in server: %d\n",infra->shmid);
				Res = shmat(infra->shmid,(void *)0,0);
				if(!Res){
					perror("could not attach the shared memory in the server\n");
					exit(EXIT_FAILURE);


				}
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


#ifdef DEBUG
	printf("%s %d end %s\n",__FILE__,__LINE__,__func__);
#endif


	return 0;

}
