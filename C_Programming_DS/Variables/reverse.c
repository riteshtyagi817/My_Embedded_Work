#include<stdio.h>
int main(){

	int num, reversed = 0;
	int remainder = 0;
	printf("Enter the  number: ");
	scanf("%d",&num);
	printf("Number before reverse: %d\n",num);
		
	while(num != 0){

		remainder = num%10;
		reversed = reversed*10 + remainder;
		num /= 10;


	}

	printf("Number after reverse: %d\n",reversed);
	return 0;
}
