#ifndef DECLARATIONS_H
#define DECLARATIONS_H
#ifndef NFUNC
#define NFUNC 2
#endif

void init();

extern void * (*fptrArr[NFUNC])(void *);
extern void * createInfra(void *arg);
extern void * exitServer(void *arg);


#endif
