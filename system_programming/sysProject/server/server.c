#include "declarations.h"
#include "../common/dataStructures.h"

int main(int agrc, char *argv[]){

#ifdef DEBUG 
	printf("%s %d start %s\n",__FILE__,__LINE__,__func__);
#endif
	int fifoFd;
	init();
	pid_t pid;
	int bytes_read = 0;
	Infra *infra = NULL;
	int bytes_write = 0;
	char strpipeFd[4];
	memset(strpipeFd, '\0',sizeof(strpipeFd));
	infra = (Infra *)(*fptrArr[1])(NULL);
	Request *req = (Request *)calloc(1,sizeof(Request));
	if(!req){
		perror("Some Issue during memory alloc in server\n");
		(*fptrArr[0])("FAILURE");

	}

	if(!infra){
		perror("Some issue during createInfra\n");
		(*fptrArr[0])("FAILURE");	

	}

		
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



			}	

		}




	}

	/*
	fd = open(MYFIFO,O_RDWR);
        if(fd < 0){

                perror("could not open the fifo\n");
                exit(EXIT_FAILURE);
        }
        infra->fifoDsc = fd;
	*/

#ifdef DEBUG
	printf("%s %d end %s\n",__FILE__,__LINE__,__func__);
#endif


	return 0;

}
