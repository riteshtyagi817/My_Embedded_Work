#include<stdio.h>
int main(){


	int a = 23;
	int b = 45;
	printf("Before swap: %d and %d\n",a,b);
	a =  a + b;
	b =  a - b;
	a =  a - b;
	printf("After swap: %d and %d\n",a,b);

	return 0;
}
