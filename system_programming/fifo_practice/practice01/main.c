#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<errno.h>
#include<stdlib.h>
#define FIFO "./myFifo"
int main(){

	int ret = 0;
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


	return 0;

}
