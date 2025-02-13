#include "../common/headers.h"
#include "../common/declarations.h"
#include<errno.h>
int main(){

	struct sockaddr_un serverSock;
	struct sockaddr_un clientSock;
	//memset(&clientSock,0,sizeof(clientSock));
	int skFd = 0;
	int clientFd = 0;
	char input[20];
	memset(input,0,sizeof(input));
	skFd = socket(AF_UNIX,SOCK_STREAM,0);
	if(skFd < 0){
		perror("socket creation failed\n");
		exit(EXIT_FAILURE);
	}
	printf("Socket creation successful\n");
	serverSock.sun_family = AF_UNIX;
	strncpy(serverSock.sun_path,SOCKPATH,sizeof(serverSock.sun_path) -1);
	if(-1 == bind(skFd,(struct sockaddr *)&serverSock,(socklen_t)(sizeof(struct sockaddr)))){
		perror("bind failed\n");
		close(skFd);
		exit(EXIT_FAILURE);
	}
	// listen not supported on AF_UNIX
	/*if(-1 == listen(skFd,5)){
		perror("listen failed\n");
		close(skFd);
		exit(EXIT_FAILURE);
	} */

        int len = sizeof(clientSock);
        //socklen_t  len = 0;
	clientFd = accept(skFd,(struct sockaddr *)&clientSock,(socklen_t *)&len);
	if(clientFd < 0){

		printf("Error no:%d\n",errno);
		perror("accept failed\n");
		close(skFd);
		exit(EXIT_FAILURE);

	}
	int read_bytes = read(clientFd,input,sizeof(input)-1);
	if(read_bytes <= 0){
	
	}
	else{
		printf("Read String is %s\n",input);
		
	}
	
	return 0;

}
