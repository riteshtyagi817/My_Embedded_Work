#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H
#include "headers.h"

#ifndef MYFIFO
#define MYFIFO "../myFiFo"
#endif

#ifndef MSQID
#define MSQID 24
#endif

#ifndef SHDMID 
#define SHDMID 26
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
	float result;

}Result;
#endif
