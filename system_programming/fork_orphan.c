#include<stdio.h>
#include<unistd.h>
int main(){
	int ret;
	int n;
	ret = fork();
	switch(ret){

		case 0:
			n = 30;
			printf("I am child and my pid is %d\n", getpid());
			break;
		case -1:
			perror("fork failed\n");
			break;
		default:
			n = 15;
			printf("I am parent and my pid is %d\n", getpid());
			break;

	}
	for(int i = 0; i < n;++i){
		printf("my pid is %d and my parent pid is %d\n", getpid(), getppid());
		sleep(1);

	}

	return 0;

}
