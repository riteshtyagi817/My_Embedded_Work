#include "headers.h"
#include "declarations.h"
int main()
{
	int start = 0;
	int end  = 0;
	int choice = 0;
	printf("\n%s begin\n", __func__);
	printf("Enter the starting number from the range to print even/odd\n");
	scanf("%d",&start);
	printf("Enter the ending number from the range to print even/odd\n");
	scanf("%d",&end);
	printf("Enter the choice to select even/odd : 1-->even , 2-->odd\n");
	scanf("%d",&choice);
	if(1 == choice)
	{
		printf("Displaying the even numbers from the range %d to %d\n", start, end);
		printRangeOddEven(start, end, choice);
	}
	else
	{
		printf("Displaying the odd  numbers from the range %d to %d\n", start, end);
		printRangeOddEven(start, end, choice);

	}
	printf("\n%s end\n", __func__);
	return 0;
}
