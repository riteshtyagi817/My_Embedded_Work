#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void foo(int sec){

	sleep(sec);
}
void bar(int sec){
	sleep(sec);
}
int main(int argc , char *argv[]){

	pid_t ret;
	if(argc != 3){

		
		fprintf(stderr, "Usage: %s { child-alive-sec} { parent-alive-sec}\n",argv[0]);
		exit(EXIT_FAILURE);
	}
	switch(ret = fork()){

		case -1:perror("Fork failed, aborting\n");
		case 0:
		printf("Child process, PID %d\n return from fork %d\n",getpid(), ret);
		foo(atoi(argv[1]));
		printf("Child process %d done\n", getpid());
		exit(EXIT_SUCCESS);
		default:
		printf(" Parent process, PID %d\n return from fork %d\n",getpid(), ret);
		bar(atoi(argv[2]));
	}
	printf("Parent %d will exit now\n",getpid());
	exit(EXIT_SUCCESS);

	return 0;
}
