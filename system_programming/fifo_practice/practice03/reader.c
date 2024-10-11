#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<errno.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#define FIFO "./myFifo"
int main(){

	int ret = 0;
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
	ret = open(FIFO,O_RDONLY);
	if(ret < 0){

		perror("open fifo in reader failed\n");
		exit(EXIT_FAILURE);
	}


	return 0;

}
