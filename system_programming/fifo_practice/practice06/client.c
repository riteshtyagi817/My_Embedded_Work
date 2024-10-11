#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<errno.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#define FIFO "./myFifo"
int main(){

	int ret = 0;
	char buff[100];
	int bytes = 0;
	int fd = 0;
	if(access(FIFO,F_OK)){
		ret = mkfifo(FIFO,0666);
		if(ret < 0){

			if(errno == EEXIST){
				perror("FIFO already exists\n");
				exit(EXIT_FAILURE);

			}
			else if(errno == ENOENT){

				perror("FIFO path directory not present\n");
				exit(EXIT_FAILURE);
			}

		}
	}
	else{
		printf("FIFO already exist\n");



	}
	fd  = open(FIFO,O_WRONLY);
	if(fd < 0){
		perror("fifo open in writer failed\n");
		exit(EXIT_FAILURE);

	}
	printf("Client send:\n");

	do{
		memset(buff,'\0',sizeof(buff));
		printf("Enter the string to send to server, enter \"End\" to end the client\n");
		fgets(buff,sizeof(buff),stdin);
		bytes += write(fd,buff,strlen(buff));
		printf("Bytes: %d written through pipe\n",bytes);
	}while(strncmp(buff,"End",3) != 0);
	printf("Bye-Bye from client\n");
	return 0;

}
