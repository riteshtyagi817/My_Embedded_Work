#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){


	int n = 0;
	char *message; 
	pid_t pid;
	printf("Fork program starting\n");
	pid = fork();
	switch(pid){
	
		case -1:
		perror("fork");
		exit(-1);
		case 0:
		//printf("Child case\n");
		n = 5;
		message = "This is the child";
		break;
		default:
		//printf("Parent case\n");
		message = "This the parent";
		n = 3;
		break;


	}
	for(;n  > 0;n--){
		puts(message);
		sleep(1);
	}
	exit(0);

}
