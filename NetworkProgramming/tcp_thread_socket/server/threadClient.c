#include "../common/headers.h"
#include "./declarations.h"

void * threadClientWork(void *arg){

	//printf("function name:%s\n",__func__);
	int skFd = *(int *)arg;
	int ckFd = 0;
	char input[50];
	int read_bytes = 0;
	memset(input, 50,sizeof(input));
	struct sockaddr_in clientSocket;

	socklen_t len = sizeof(struct sockaddr);
	ckFd = accept(skFd, (struct sockaddr *)&clientSocket,&len);
	if(ckFd < 0){
		perror("accept failed\n");
		exit(EXIT_FAILURE);
	}
	read_bytes = read(ckFd, input, sizeof(input)-1);
	if(read_bytes <= 0){

		perror("reading failed\n");
	
	}
	else{
		input[read_bytes] = '\0';
		printf("Read from client: %s\n",input);
	}
	//sem_post(&psem);
	sleep(1);
	sem_post(&psem);
	return NULL;
	
}
