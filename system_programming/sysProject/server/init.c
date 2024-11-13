#include "declarations.h"

void init(){
#ifdef DEBUG
	printf("%s start\n",__func__);
#endif

	fptrArr[0] = exitServer;
	fptrArr[0] = createInfra;


#ifdef DEBUG
	printf("%s end\n",__func__);
#endif

}
