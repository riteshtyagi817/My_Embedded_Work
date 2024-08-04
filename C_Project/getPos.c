#include "headers.h"
#include "declarations.h"
#include "dataStructures.h"

void * getPos(void *arg)
{
#ifdef DEBUG
	printf("%s Begin\n", __func__);
#endif
	MUnique *input = (MUnique *)(arg);
	int *index = (int *)malloc(sizeof(int));
	if(!index)
	{
		perror("malloc failed\n");
		return NULL;
	}
	*index = -1;
	for(int i = 0; i < input->size;i++)
	{
		if(input->ch == input->ma[i])
		{
			*index = i;
			break;
		}


	}
	if(*index == -1)return NULL;

	return (void *)index;


#ifdef DEBUG
	printf("%s End\n", __func__);
#endif

}
