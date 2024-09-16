#include"headers.h"
#include"declarations.h"
int sum1ToN(int number)
{
	//printf("\n%s begin\n",__func__);
	if(number < 1)
	{
		return 0;

	}
	return number + sum1ToN(number-1);
	//printf("\n%s end\n",__func__);

}
