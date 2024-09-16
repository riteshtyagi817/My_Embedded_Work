#include "headers.h"
#include "getArray.h"

int * getArray(int size){

	int *input  = (int *)calloc(size, sizeof(int));
	if(input == NULL)
	{
		printf("Array creation failed\n");
		return NULL;
	}
	printf("Enter %d elements one by one:\n",size);
	for(int i = 0; i < size;i++) 
		scanf("%d", &input[i]);

	return input;

}
