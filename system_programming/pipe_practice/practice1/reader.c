#include "headers.h"
int main(int argc, char *argv[]){


	printf("%s start\n", __func__);
	printf(" I am child and my pid: %d and my parent pid: %d\n",getpid(),getppid());
	char buff[100];
	int bytes = 0;
	memset(buff,'\0',sizeof(buff));
	if(argc < 2){

		perror("pipe fd could not be passed\n");
		exit(EXIT_FAILURE);

	}
	int readFd = atoi(argv[1]);
	bytes = read(readFd,buff,sizeof(buff)-1);
	printf("read the buffer from the pipe is %s\n",buff);
		
	printf("%s end\n", __func__);


	return 0;

}


