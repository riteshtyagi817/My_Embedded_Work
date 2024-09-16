#include<stdio.h>
int main()
{
	printf(" %s begin\n", __func__);
	int a = 125;
	int b = 12345;
	long ax = 1234567890;
	short s = 4043;
	float x = 2.13459;
	double dx = 1.1415927;
	char c = 'W';
	unsigned long ux = 2541567890;
	printf("Printing sample variables\n");
	printf(" Value of a + c is %d\n",a+c);
	printf(" Value of x + c is %f\n",x+c);
	printf(" Value of dx + x is %lf\n",dx + x);
	printf(" Value of ((int)dx) + ax is %ld\n",(((int)dx) + ax));
	printf(" Value of a + x is %f\n",a+x);
	printf(" Value of s + b is %d\n",s+b);
	printf(" Value of ax + b is %ld\n",ax+b);
	printf(" Value of s + c is %d\n",s+c);
	printf(" Value of ax + c is %ld\n",ax+c);
	printf(" Value of ax + ux is %lu\n",ax+ux);
	printf(" %s end\n", __func__);
}
