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

#ifndef SEMCLI
#define SEMCLI 3333
#endif

#ifndef SHDPOSIX
#define SHDPOSIX 27
#endif
 union semun {
               int              val;    /* Value for SETVAL */
               struct semid_ds *buf;    /* Buffer for IPC_STAT, IPC_SET */
               unsigned short  *array;  /* Array for GETALL, SETALL */
               struct seminfo  *__buf;  /* Buffer for IPC_INFO
                                           (Linux-specific) */
           };
typedef struct Infra{

        int *pipeFd;
        char *fifo;
        int msqId;
        int shmid;
	int semCli;
	union semun su[4];
	sem_t pthsem;
	sem_t *semRes;
	int shmResultId;

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

typedef struct Message{

        char data[sizeof(Result)];
        long msgType;

}Msg;
#endif
