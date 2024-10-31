#include "headers.h"
#include "declarations.h"

int main(){


	int id = msgget((key_t)20,IPC_CREAT|0666);
	if(id < 0){

			perror("msgget failed\n");
			exit(EXIT_FAILURE);
	}
	
	printf("\n");
	system("ipcs");

	Msg msg;
	memset(msg.data,'\0',sizeof(msg.data));


	int ret  = msgrcv(id,(void *)&msg,sizeof(msg.data),-27,0);
	if(ret < 0){
		perror("msgrcv failed\n");
		exit(EXIT_FAILURE);
	}

	printf("Message with type %ld Read: %s\n",msg.type,msg.data);
	printf("Message read successfully\n");
	system("ipcs");
	
	return 0;

}
