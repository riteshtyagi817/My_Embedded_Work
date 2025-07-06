#include<stdio.h>
#include<unistd.h>
int main(){


	pid_t pid;
	pid_t ppid;
	pid = getpid();
	ppid = getppid();
	printf("My pid is %d\n",pid);
	printf("My Parent pid is %d\n",ppid);



	return 0;

}
