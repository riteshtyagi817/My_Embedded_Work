#include "headers.h"
#include "declarations.h"

int main(int argc, char *argv[]){
#ifdef DEBUG
	printf("%s start\n",__func__);
#endif

	printf("Welcome to chat application for reading\n");
	int mqid = createQueue();
	Msg msg;

	memset(msg.data, '\0',sizeof(msg.data));

	msg.type = 0;
	int bytes = 0;

	do{		
		bytes  = receiveMsg(mqid, &msg);

	}while(bytes != 0);

	printf("Bye - Bye from reader\n");

#ifdef DEBUG
	printf("%s start\n",__func__);
#endif

}
