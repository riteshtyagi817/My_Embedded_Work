#include "declarations.h"
#include "../common/dataStructures.h"
void * (*fptrArr[NFUNC])(void *);

void init(){
#ifdef DEBUG
	printf("%s start\n",__func__);
#endif

	fptrArr[0] = exitServer;
	fptrArr[1] = createInfra;
	fptrArr[2] = processRequest;
	fptrArr[3] = processResult;


#ifdef DEBUG
	printf("%s end\n",__func__);
#endif

}
