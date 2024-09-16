#include "headers.h"
#include "declarations.h"
int main()
{
	int input = 0;
	printf("\n%s begin\n", __func__);
	printf("Enter the natural number greater than or equal to 1\n");
	scanf("%d",&input);
	printf("Displaying the sum from 1 to %d\n", input);
	printf("\n%d\n",  sum1ToN(input));
	printf("\n%s end\n", __func__);
	return 0;
}
