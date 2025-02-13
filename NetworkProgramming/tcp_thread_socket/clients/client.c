#include "../common/headers.h"
int main(){

	struct sockaddr_in svSock;
	int write_bytes = 0;
	int skFd = 0;
	
	char input[] = "Hello from client";
	skFd = socket(AF_INET,SOCK_STREAM,0);
	if(skFd < 0){

		perror("socket failed\n");
		exit(EXIT_FAILURE);
	}
	svSock.sin_family = AF_INET;
	svSock.sin_port = htons(6666);
	svSock.sin_addr.s_addr = inet_addr("127.0.0.1");
	if(connect(skFd, (struct sockaddr *)&svSock,sizeof(struct sockaddr )) < 0){

		perror("connect failed\n");
		exit(EXIT_FAILURE);
	}
	write_bytes = write(skFd, input, strlen(input));
	printf("written to client\n");
	if(write_bytes <= 0){
		printf("could not write anything to server\n");
		

	}

	return 0;


}
