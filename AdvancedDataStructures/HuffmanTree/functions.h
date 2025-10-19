#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H
#include "ds.h"
char *getInput();
void build_master(char *input,mStruct **temp);
int createPriorityQueue(mStruct *mArray,PrQueue *pq);
#endif
