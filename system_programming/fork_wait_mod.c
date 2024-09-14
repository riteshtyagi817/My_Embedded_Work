#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
int main(){
	int ret;
	int n;
	pid_t cpid;
	int status = 0;
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
	if(ret > 0){
		cpid = wait(&status);
		int value = status;
		int size = sizeof(status)*8;
		while(size--)
		{
			if(value & 1) printf("1");
			else printf("0");
			value >>= 1;

		}
		printf("\n");
		if(WIFEXITED(status)){
		
		printf("I am Parent and my child with pid %d has been executed successfully\n",cpid);
		printf("My child return status  value is %d\n",WEXITSTATUS(status));


		}
		
	}

	exit (n);

}
