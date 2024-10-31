#include "headers.h"
#include "declarations.h"
int main(int argc, char *argv[]){

#ifdef DEBUG
	printf("%s start\n", __func__);
#endif
	char reply;
	Msg msg;
	int mqid = createQueue();
	printf("Welcome to chat application for writing\n");
	printf("you can provide (y/n) if you want to enter message type as well.\n");
	scanf("%c",&reply);
	if(reply == 'y'){
		printf("Please enter the type of message(any integer value): ");
		scanf("%ld",&msg.type)

	}
	else{

		msg.type = 26;
	}

	while(1){
		printf("Please Enter your text message upto (500 characters at once) for exiting the program you can type exit");
       	 	memset(msg.data,'\0',sizeof(msg.data));
        	fgets(msg.data,sizeof(msg.data),stdin);
		if(0 == strncmp(msg.data,"exit")){
			break;
		}
		sendMsg(mqid, &msg);
	
	}	

#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
}
