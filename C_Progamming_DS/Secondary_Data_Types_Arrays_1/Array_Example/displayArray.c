#include "headers.h"
#include "declarations.h"
void displayArray(int *array, int size)
{
	int i = 0;
	printf("%s Begin\n", __func__);
	for(int i = 0; i  < size;i++) printf("%d ", *(array+i));
	printf("\n");
	printf("%s End\n", __func__);
	return;
}
