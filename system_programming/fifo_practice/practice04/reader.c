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
	int fd = 0;
	int bytes = 0;
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
	fd = open(FIFO,O_RDONLY);
	if(fd < 0){

		perror("open fifo in reader failed\n");
		exit(EXIT_FAILURE);
	}
	memset(buff,'\0',sizeof(buff));
	bytes = read(fd,buff,sizeof(buff) -1);
	printf("Bytes: %d written read pipe\n",bytes);
	printf("Buffer read by pipe: %s\n",buff);


	return 0;

}
