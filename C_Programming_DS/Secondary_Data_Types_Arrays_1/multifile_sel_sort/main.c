#include "headers.h"
#include "getArray.h"
#include "selectionSort.h"
#include "displayArray.h"
int main()
{
	printf("Enter the size of the array you want to sort: ");
	int size = 0;
	scanf("%d", &size);
	int *input = getArray(size);
	printf("Before sort diplaying the array:\n");
	displayArray(input, size);
	selectionSort(input,size);
	printf("After sort displaying the array:\n");
        displayArray(input, size);	
	return 0;

}
