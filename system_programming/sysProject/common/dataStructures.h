#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H

#ifndef MYFIFO
#define MYFIFO "./srvFiFo"
#endif

typedef struct Message{

        char data[128];
        long msgType;

}Msg;
typedef struct Infra{

        int *pipeFd;
        char *fifo;
        int msqId;
        int shmid;

}Infra;
typedef struct Request{

	long pid;
	int opr1;
	int opr2;
	char operation;

}Request;
typedef struct Result{

	long pid;
	int result;

}Result;
#endif
