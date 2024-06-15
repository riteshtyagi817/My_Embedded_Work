#include"headers.h"
#include"declarations.h"
void printRangeOddEven(int start, int end, int choice)
{
	//printf("\n%s begin\n",__func__);
	if(start > end) return;
	if(choice == 1)
	{
		if(start % 2 == 0)
			printf("%d ", start);

	}
	else
	{	
		if(start % 2 != 0)
			printf("%d ", start);

	}
	printRangeOddEven(start+1, end, choice);
	//printf("\n%s end\n",__func__);
	return;

}
