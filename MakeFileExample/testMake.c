#include "headers.h"
#include "declarations.h"
void testMakeFile(){
#ifdef DEBUG
	printf("%s start\n",__func__);
#endif

	printf("we are just testing out the make file functionality here.\n");

#ifdef DEBUG
	printf("%s end\n",__func__);
#endif
}
