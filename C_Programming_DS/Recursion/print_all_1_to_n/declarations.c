#include"headers.h"
#include"declarations.h"
void print1ToN(int number)
{
	//printf("\n%s begin\n",__func__);
	if(number < 1)
	{
		return;

	}
	print1ToN(number-1);
	printf("%d ",number);
	//printf("\n%s end\n",__func__);
	return;

}
