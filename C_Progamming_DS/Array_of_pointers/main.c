#include "headers.h"
#include "declarations.h"
int main()
{
	int size = 0;
	int **input = NULL;
	printf("%s Begin\n", __func__);
	printf("Enter the size of array of pointers\n");
	scanf("%d",&size);
	input = getArray(size);
	getValues(input, size);
	displayArray(input,size);
	printf("%s End\n", __func__);
	return 0;
}
