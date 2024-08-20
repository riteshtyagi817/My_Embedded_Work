#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"
void * cMaxBits(void *arg)
{
#ifdef DEBUG
	printf("%s Begin\n", __func__);
#endif

	int len = strlen((char*)arg);

	flag = 0;
	if(len < 4)
		flag = 2; 
	else if(len < 8)
		flag = 3;
	else if(len < 16)
		flag = 4;
	else if(len < 32)
		flag = 5;
	else if(len < 64)
		flag = 6;
	else if(len < 128)
		flag = 7;
	else if(len < 256)
		flag  = 8;
	else 
		flag = 0;


#ifdef DEBUG
	printf("%s End\n", __func__);
#endif

	return (void *)(&flag);

}
