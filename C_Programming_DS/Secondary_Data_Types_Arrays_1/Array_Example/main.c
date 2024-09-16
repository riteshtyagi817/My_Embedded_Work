#include"headers.h"
#include"declarations.h"
int main()
{
	printf("%s Begin\n", __func__);
	int size  = 0;
	printf("Enter the size of the array you want to create\n");
	scanf("%d", &size);
	int *array  = createArray(size);
	printf("Now Enter the values one by one\n");
	getValues(array, size);
	printf("Now displaying the array\n");
	displayArray(array, size);	
	printf("%s End\n", __func__);


	return 0;

}
