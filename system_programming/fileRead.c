#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main(){


	int fd = open("test.txt", O_RDONLY);
	if(fd == -1){
		perror("open");
		exit(EXIT_FAILURE);
	}
	char buffer[128];
	memset(buffer,'\0',sizeof(buffer));
	ssize_t bytesRead = read(fd, buffer, sizeof(buffer)-1);
	if(bytesRead > 0){

			printf("Reading bytes: %s\n",buffer);
			
	}
	close(fd);


	return 0;
}
