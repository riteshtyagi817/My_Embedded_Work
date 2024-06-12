#include "headers.h"
#include "declarations.h"
void getValues(int **input, int size)
{
	int i = 0;
	int j = 0;
	printf("%s Begin\n", __func__);
	printf("We need to enter total %d values\n", size*size);
	for(i = 0; i < size;i++)
	{
		printf("Enter %d values for %d index \n", size, i);
		for(j = 0; j < size;j++)
		{
			scanf("%d", (*(input + i)+j));			
		}


	}
	printf("%s End\n", __func__);
	return;
}
