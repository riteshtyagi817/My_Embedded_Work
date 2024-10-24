#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<stdlib.h>
void sig_handler(int signo){
	
	printf("Caught signal with sig no %d.\n",signo);
	exit(0);
}

int main(int argc, char *argv[]){


	signal(SIGINT,sig_handler);
	signal(SIGQUIT,sig_handler);
	printf("You can use kill -l to list all the signals with signal numbers\n");
	printf("You can also press ctrl-\\ or ctrl-c to terminate the process with core dump.\n");
	while(1){

		printf("Test Running\n");
		sleep(1);


	}

	return 0;
}
