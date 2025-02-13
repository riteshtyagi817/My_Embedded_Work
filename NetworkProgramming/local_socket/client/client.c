#include "../common/headers.h"
#include "../common/declarations.h"

int main(){

	int sockFd = 0;
	int ret = 0;
	char input[20] = "Hello Server";
	sockFd = socket(AF_UNIX,SOCK_STREAM,0);
	if(sockFd < 0){
		perror("socket call error\n");
		exit(EXIT_FAILURE);
	}
	struct sockaddr_un serverSock;
	memset(&serverSock,'\0',sizeof(serverSock));

	serverSock.sun_family  = AF_UNIX;
	strncpy(serverSock.sun_path,SOCKPATH,strlen(SOCKPATH));

	ret = connect(sockFd,(struct sockaddr *)&serverSock,(socklen_t)sizeof(struct sockaddr));
	if(ret < 0){

		perror("connect failed\n");
		close(sockFd);
		exit(EXIT_FAILURE);
	}

	int write_bytes = write(sockFd,input, strlen(input));
	if(write_bytes <= 0){
		printf("could not write anything\n");
	}

	return 0;
}
