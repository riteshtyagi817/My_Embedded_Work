#include "headers.h"
#include "displayArray.h"
void displayArray(int arr[], int size)
{
	for(int i = 0; i < size;i++)
		printf("%d ", arr[i]);
	printf("\n");
	return;

}
