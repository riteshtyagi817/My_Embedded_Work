#ifndef DECLARATIONS_H
#define DECLARATIONS_H
typedef struct myMsg{

	long type;
	char data[512];


}Msg;
int createQueue();
void sendMsg(int mqid,Msg *msg);
int receiveMsg(int mqid, Msg *msg);
#endif
