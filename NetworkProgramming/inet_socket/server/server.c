#include "../common/headers.h"
#include "../common/declarations.h"
int main(){

	struct sockaddr_in serverSock;
	struct sockaddr_in clientSock;
	int skFd = 0;
	int clientSocket = 0;
	char input[20];
	memset(input,'\0', sizeof(input));
	skFd = socket(AF_INET,SOCK_STREAM,0);
	if(skFd < 0){
		perror("socket creation failed\n");
		exit(EXIT_FAILURE);
	}
	printf("Socket creation successful\n");
	serverSock.sin_family = AF_INET;
	serverSock.sin_port = htons(MYPORT);
	serverSock.sin_addr.s_addr = htonl(INADDR_ANY);
	if(-1 == bind(skFd,(struct sockaddr *)&serverSock,(socklen_t)(sizeof(struct sockaddr)))){
		perror("bind failed\n");
		close(skFd);
		exit(EXIT_FAILURE);
	}
	// listen not supported on AF_UNIX
	listen(skFd,5);
	socklen_t  len = sizeof(struct sockaddr);
	clientSocket = accept(skFd, (struct sockaddr *)&clientSock,&len);
	if(clientSocket < 0){

		perror("accept failed\n");
		close(skFd);
		exit(EXIT_FAILURE);
	}
	int read_bytes = read(clientSocket, input, sizeof(input)-1);
	if(read_bytes <= 0){
		printf("could not read anything from the socket\n");
		exit(EXIT_FAILURE);
	}
	
	printf("Read from the client: %s\n", input);

	return 0;

}
