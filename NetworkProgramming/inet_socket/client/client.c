#include "../common/headers.h"
#include "../common/declarations.h"


int main(){


	struct sockaddr_in svSocket;
	int skFd = 0;
	char input[20];
	memset(input,'\0', sizeof(input));
	if((skFd = socket(AF_INET, SOCK_STREAM,0)) < 0){

		perror("socket creation failed\n");
		exit(EXIT_FAILURE);
	}
	svSocket.sin_family = AF_INET;
	svSocket.sin_port = htons(MYPORT);
	svSocket.sin_addr.s_addr = inet_addr("127.0.0.1");

	if(connect(skFd, (struct sockaddr *)&svSocket, (socklen_t)sizeof(struct sockaddr)) < 0){

		perror("connect failed in client\n");
		exit(EXIT_FAILURE);
	}
	strcpy(input, "Hello from Client");
	int write_bytes = write(skFd, input, strlen(input));
	if(write_bytes <=0){

		perror(" could not write anything\n");
		exit(EXIT_FAILURE);
	}
	printf("written the string to server\n");


	return 0;
}
