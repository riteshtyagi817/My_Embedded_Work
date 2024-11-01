#include "headers.h"
#include "declarations.h"
int main(int argc, char *argv[]){

#ifdef DEBUG
	printf("%s start\n", __func__);
#endif
	char reply;
	Msg msg;
	char temp[5];
	memset(temp,'\0',sizeof(temp));
	int mqid = createQueue();
	printf("Welcome to chat application for writing\n");
	printf("you can provide (y/n) if you want to enter message type as well.\n");
	scanf("%c",&reply);
	if(reply == 'y'){
		printf("Please enter the type of message(any integer value): ");
		scanf("%ld",&msg.type);

	}
	else{

		msg.type = 26;
	}
	getchar();
	sendMsg(mqid, &msg);
		
#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
}
