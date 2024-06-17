#include "headers.h"
#include "declarations.h"
int main()
{
	int start = 0;
	int end  = 0;
	int choice = 0;
	printf("\n%s begin\n", __func__);
	printf("Enter the starting number from the range to sum of all even/odd\n");
	scanf("%d",&start);
	printf("Enter the ending number from the range to sum of all  even/odd\n");
	scanf("%d",&end);
	printf("Enter the choice to select even/odd : 1-->even , 2-->odd\n");
	scanf("%d",&choice);
	int sum = 0;
	if(1 == choice)
	{
		printf("Displaying the sum of even numbers from the range %d to %d\n", start, end);
		sumRangeOddEven(start,end, choice,&sum);
		printf("\n%d\n",sum);
	}
	else
	{
		printf("Displaying the sum of odd  numbers from the range %d to %d\n", start, end);
		sumRangeOddEven(start,end, choice,&sum);
		printf("\n%d\n",sum);

	}
	printf("\n%s end\n", __func__);
	return 0;
}
