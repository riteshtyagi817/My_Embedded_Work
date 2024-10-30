#include "headers.h"
#include "declarations.h"

int main(){


	printf("Demo of private msg queue as well\n");
	int pri_id = msgget(IPC_PRIVATE,IPC_CREAT|0666);
	if(pri_id < 0){

		perror("msgget failed\n");
		exit(EXIT_FAILURE);
	}

	int id = msgget((key_t)20,IPC_CREAT|0666);
	if(id < 0){

		perror("msgget failed\n");
		exit(EXIT_FAILURE);
	}

	printf("Msg queue got created.\n");
	system("ipcs");

	Msg msg;
	memset(msg.data,'\0',sizeof(msg.data));
	msg.type = 25;
	strcpy(msg.data,"Gapedi is a naughty child");

	int ret  = msgsnd(id,(void *)&msg,strlen(msg.data),0);
	if(ret < 0){
		perror("msgsnd failed\n");
		exit(EXIT_FAILURE);
	}
	printf("Message written successfully\n");
	system("ipcs");

	return 0;

}
