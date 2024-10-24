#include<stdio.h>
#include<unistd.h>
int main(int argc, char *argv[]){


	printf("You can use kill -l to list all the signals with signal numbers\n");
	printf("You need to press ctrl-c to stop this execution.\n");
	printf("You can also press ctrl-\\ to terminate the process with core dump.\n");
	while(1){

		printf("Test Running\n");
		sleep(1);

	}



	return 0;
}
