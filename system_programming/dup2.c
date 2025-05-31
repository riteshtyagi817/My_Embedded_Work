#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main(){

	int fd = open("out.txt", O_WRONLY|O_CREAT|O_TRUNC, S_IRWXU);
	if(fd < -1){

		perror("open");
		exit(EXIT_FAILURE);
	}
	//dup2(fd, STDOUT_FILENO);
	dup2(fd, 1);
	printf("this will be written to the output file\n");
	close(fd);
	return 0;


}
