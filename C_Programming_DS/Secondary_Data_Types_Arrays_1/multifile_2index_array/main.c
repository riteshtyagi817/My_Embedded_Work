#include "headers.h"
#include "declarations.h"
int main()
{
	int *input = NULL;
	int fi = 0;
	int si = 0;
	printf("%s Begin\n", __func__);
	printf("Enter the no of 1-d arrays\n");
	scanf("%d",&fi);	
	printf("Enter the no of elements in 1-d array\n");
	scanf("%d", &si);
	input = createArray(fi, si);
	getValues(input, fi, si);
	displayArray(input, fi, si);
	printf("%s End\n", __func__);

	return 0;
}
