#ifndef DECLARATIONS_H
#define DECLARATIONS_H
#include "../common/headers.h"
#define MYFIFO "./srvFiFo"

typedef struct Message{


	char data[1024];
	long msgType;

}Msg;
typedef struct Infra{

	int pipeFd[2];
	int fifoDsc;
	int msqId;
	int shmid;

}Infra;
void createInfra(Infra *infra);
void createPipe(Infra *infra);
void createFifo(Infra *infra);
void createMsq(Infra *infra);
void createShm(Infra *infra);
void freeInfra(Infra *infra);
#endif
