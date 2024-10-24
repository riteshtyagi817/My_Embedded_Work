#include<stdio.h>
#include<unistd.h>
#include<signal.h>
int flag = 0;
void sig_handler(int signo){

	flag = 1;
	return;


}

int main(int argc, char *argv[]){


	signal(SIGINT,sig_handler);
	printf("You can use kill -l to list all the signals with signal numbers\n");
	printf("You can also press ctrl-\\ to terminate the process with core dump.\n");
	while(1){

		printf("Test Running\n");
		sleep(1);
		if(flag){

			printf("Successfully caught signal no %d.\n",SIGINT);
			flag = 0;
		}

	}

	return 0;
}
