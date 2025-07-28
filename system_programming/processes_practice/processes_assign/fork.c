#include<stdio.h>
#include<unistd.h>
int main(){

	int pid = fork();
	if(pid > 0){
		printf("Parent process \n");
	}else if(pid == 0){
		printf("Child is created\n");
	}else{
		printf("error\n");
	}
	return 0;

}
