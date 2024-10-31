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
	int bytes_written = 0;
	printf("Please Enter your text message upto (500 characters at once).");
	memset(msg.data,'\0',sizeof(msg.data));
	fgets(msg.data,sizeof(msg.data),stdin);
	bytes_written = msgsnd(mqid, msg, strlen(msg.data),0);
	printf("%d bytes Message written successfully, read it through reader program.\n",bytes_written);
	return;



#ifdef DEBUG
	printf("%s end\n",__func__);
#endif


}

void receiveMsg(int mqid, Msg *msg){

#ifdef DEBUG
	printf("%s start\n",__func__);
#endif
	int bytes_read = 0;
	memset(msg.data,'\0',sizeof(msg.data));
	bytes_read = msgrcv(mqid, msg, sizeof(msg.data),msg.type,0);
	printf("%d bytes Message read successfully.\n",bytes_read);
	printf("Your message is %s\n",msg.data);
	return;



#ifdef DEBUG
	printf("%s end\n",__func__);
#endif


}









