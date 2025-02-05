#include "../common/headers.h"
#include "../common/declarations.h"
int main(){

	struct sockaddr_un serverSock;
	int skFd = 0;
	skFd = socket(AF_UNIX,SOCK_DGRAM,0);
	if(skFd < 0){
		perror("socket creation failed\n");
		exit(EXIT_FAILURE);
	}
	printf("Socket creation successful\n");
	serverSock.sun_family = AF_UNIX;
	strncpy(serverSock.sun_path,SOCKPATH, sizeof(serverSock.sun_path));
	if(-1 == bind(skFd,(struct sockaddr *)&serverSock,(socklen_t)(sizeof(struct sockaddr)))){
		perror("bind failed\n");
		close(skFd);
		exit(EXIT_FAILURE);
	}
	// listen not supported on AF_UNIX
	//listen(skFd,5);





	return 0;

}
