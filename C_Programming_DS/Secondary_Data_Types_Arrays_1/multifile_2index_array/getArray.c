#include "headers.h"
#include "declarations.h"
int * createArray(int fi, int si)
{
	int *input = NULL;
	printf("%s Begin\n", __func__);
	input = (int *)malloc(fi*si*sizeof(int));
	if(!input)
	{
		perror("Malloc failed to allocate the array\n");
		exit(EXIT_FAILURE);

	} 

	printf("%s End\n", __func__);
	return input;
}
