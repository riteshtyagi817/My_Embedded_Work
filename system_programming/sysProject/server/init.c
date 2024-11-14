#include "declarations.h"
#include "../common/dataStructures.h"
void * (*fptrArr[NFUNC])(void *);

void init(){
#ifdef DEBUG
	printf("%s start\n",__func__);
#endif

	fptrArr[0] = exitServer;
	fptrArr[1] = createInfra;


#ifdef DEBUG
	printf("%s end\n",__func__);
#endif

}
