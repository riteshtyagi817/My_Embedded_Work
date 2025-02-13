#include "../common/headers.h"
#include "./declarations.h"
int createInfra(){

	//printf("function name: %s\n",__func__);
	struct sockaddr_in svAdr;
	int skFd = 0;
	skFd = socket(AF_INET, SOCK_STREAM,0);
	if(skFd < 0){
		perror("socket creation failed\n");
		exit(EXIT_FAILURE);
	}
	svAdr.sin_family = AF_INET;
	svAdr.sin_port = htons(6666);
	svAdr.sin_addr.s_addr = htonl(INADDR_ANY);

	if(bind(skFd,(struct sockaddr *)&svAdr,sizeof(struct sockaddr)) < 0){
			perror("bind failed\n");
			exit(EXIT_FAILURE);
	}
	listen(skFd,5);


	
	return skFd;
}
