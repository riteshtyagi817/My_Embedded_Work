#include "../common/dataStructures.h"
#include "declarations.h"
 
void * processRequest(void *arg){

#ifdef DEBUG
	printf("%s function start\n",__func__);
#endif

	int fifoFd;
	int bytes_read = 0;
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
	bytes_read = read(fifoFd, req,sizeof(Request));
	if(bytes_read <= 0){
                        printf("could not read anything.\n");
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
                                // at this point we need to read the result from shared memory which has been put up by vendor\n");

				*/

#ifdef DEBUG
	printf("%s function end\n",__func__);
#endif

}


