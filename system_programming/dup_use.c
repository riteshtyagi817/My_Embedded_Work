#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
int main(){
	int fd = open("test.txt",O_WRONLY);
	if(fd < 0){
		perror("file couldn't be open successfully\n");
		exit(EXIT_FAILURE);
	}
	close(1);
	int new_fd = dup(fd);
	printf("this content should be written to the file as 1 has been already closed\n");
	return 0;


}
