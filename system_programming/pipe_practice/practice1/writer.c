#include "headers.h"
int main(){

	printf("%s start\n",__func__);
	printf(" I am parent and my pid: %d and ppid: %d\n",getpid(),getppid()); 
	int arr[2];
	char buff[] = "This is the demonstration of pipe reading and writing";
	pid_t pid;
	char pipefd[4];
	memset(pipefd,'\0',sizeof(pipefd));
	int ret = pipe(arr);
	if(ret < 0){
		perror("some issue with pipe");
		exit(EXIT_FAILURE);
	}
	pid = fork();
	
	switch(pid){

		case 0:
			printf("child case\n");
			sprintf(pipefd,"%d",*(arr+0));
			execl("./reader","./reader",pipefd,NULL);	
			break;
		case -1:
			perror("some issue during fork");
			exit(EXIT_FAILURE);
			break;

		default:
			printf("parent case\n");
			close(*(arr+0));
			ret = write(*(arr+1),buff, strlen(buff));
			if(ret < 0){
				perror("write failed in parent\n");
				exit(EXIT_FAILURE);
			}
			printf("write successful in main\n");
			sleep(1);
			close(*(arr+1));


	}

	printf("%s end\n",__func__);
	return 0;
}
