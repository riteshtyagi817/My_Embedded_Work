#include "headers.h"
#include "declarations.h"
int createQueue(){

#ifdef DEBUG
	printf("%s start\n",__func__);
#endif

	int mqid = msgget((key_t)234,IPC_CREAT|0666);
	if(mqid < 0){

		perror("Message Queue creation using msgget failed\n");
		exit(EXIT_FAILURE);
	}
	printf("Queue got created successfully\n");
	return mqid;

#ifdef DEBUG
	printf("%s end\n",__func__);
#endif

}
void sendMsg(int mqid, Msg *msg){

#ifdef DEBUG
	printf("%s start\n",__func__);
#endif
	while(1){
		
		printf("Please Enter your text message upto (500 characters at once).\n");
		printf("You can enter \"exit\" to exit the program\n");
		memset(msg->data,'\0',sizeof(msg->data));
		fgets(msg->data,sizeof(msg->data),stdin);
		msg->data[strlen(msg->data)-1] = '\0';
		msgsnd(mqid, msg, strlen(msg->data),0);
		printf("%ld chars written\n",strlen(msg->data));
		if(0 == strncmp(msg->data,"exit",4)){
			break;
		}
	}
	return;



#ifdef DEBUG
	printf("%s end\n",__func__);
#endif


}

int receiveMsg(int mqid, Msg *msg){

#ifdef DEBUG
	printf("%s start\n",__func__);
#endif
	int bytes_read = 0;
	memset(msg->data,'\0',sizeof(msg->data));
	bytes_read = msgrcv(mqid, msg, sizeof(msg->data),msg->type,0);
	printf("%d bytes Message read successfully.\n",bytes_read);
	printf("Message received:  %s\n",msg->data);
	if(0 == strncmp(msg->data,"exit",4)){
		bytes_read = 0;
	}
	return bytes_read;



#ifdef DEBUG
	printf("%s end\n",__func__);
#endif


}









