#include "headers.h"
#include "declarations.h"
long long powerOfNum(int num, int power)
{
	printf("%s begin\n", __func__);
	if(power <= 0) return 1;
	else if(power == 1) return num;
	return num *powerOfNum(num, power-1);
	printf("%s end\n", __func__);

}
