#include"headers.h"
#include"declarations.h"
void sumRangeOddEven(int start, int end, int choice,int *sum)
{
	//printf("\n%s begin\n",__func__);
	if(start > end) return;
	if(choice == 1)
	{
		if(start % 2 == 0){
			(*sum) += start;
			sumRangeOddEven(start+1,end,choice,sum);
		}
		else
			sumRangeOddEven(start+1,end,choice,sum);
	}
	else
	{	
		if(start % 2 != 0){
			(*sum) += start;
			sumRangeOddEven(start+1,end,choice,sum);
		}
		else sumRangeOddEven(start+1,end,choice,sum);
	}
	//printf("\n%s end\n",__func__);
	return ;
}
