#include<stdio.h>
#include<unistd.h>
int main(){


	pid_t pid;
	pid_t ppid;
	printf("my pid is %d\n",getpid());
	printf("my parent pid is %d\n",getppid());



	return 0;
}
