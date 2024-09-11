#include<stdio.h>
#include<unistd.h>
int main(){
	int ret;
	ret = fork();
	int n;
	switch(ret){

		case 0:
			printf(" I am child and my pid is %d\n",getpid());
			printf(" may parent  pid is %d\n",getppid());
			break;
		case -1:
			perror("some issue with fork call\n");
			break;
		default:
			
			printf(" myc child pid is %d\n", ret);
			printf(" I am parent and my pid is %d\n", getpid());
			printf("my parent pid is %d\n", getppid());
			sleep(15);
			break;


	}

	return 0;
}
