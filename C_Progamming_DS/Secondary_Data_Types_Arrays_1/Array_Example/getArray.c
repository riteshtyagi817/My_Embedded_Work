#include "headers.h"
#include "declarations.h"
int *createArray(int size)
{
	printf("%s Begin\n", __func__);	
	int *array = (int *)malloc(size*sizeof(int));
        if(!array)
        {
                perror("memory allocation failed for malloc\n");
                exit(EXIT_FAILURE);
        }
	printf("%s End\n", __func__);	
	return array;
}
