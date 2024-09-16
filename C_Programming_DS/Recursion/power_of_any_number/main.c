#include "headers.h"
#include "declarations.h"
int main()
{
	printf("%s begin\n", __func__);
	int number = 0;
	int power = 0;
	printf("Enter the number and power to find number to the power value\n");
	scanf("%d",&number);
	scanf("%d",&power);
	long long result = powerOfNum(number,power);
	printf("Number %d to the power %d is %lld\n", number, power, result);
	printf("%s end\n", __func__);
	return 0;
}
