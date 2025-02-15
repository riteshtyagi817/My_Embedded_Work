#include<stdio.h>
int main(){


	int num = 5; // Binary 0101
	int mask = 1 << 1; // binary: 0010(toggle the 2nd bit)
	int result = num ^ mask;
	printf("Result after toggling: %d\n",result);
	


	return 0;
}
