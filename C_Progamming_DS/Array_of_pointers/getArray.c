#include "headers.h"
#include "declarations.h"
int ** getArray(int size)
{
	int **input = NULL;
	int i = 0;
	printf("%s Start\n", __func__);
	input = (int **)malloc(size*sizeof(int*));
	if(!input)
	{
		perror("Malloc failed\n");
		exit(EXIT_FAILURE);

	}
	for(i = 0; i < size;i++)
	{
		*(input + i) = (int *)malloc(size*sizeof(int));
	}

	printf("%s End\n", __func__);
	return input;

}
