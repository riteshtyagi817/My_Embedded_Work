#include<stdio.h>
int main(){

	int num = 0;
	int count = 0;
	printf("Enter the number to count the set bits: ");
	scanf("%d",&num);
	while(num){
		count += (num & 1);
		num >>=1;
	}
	printf("Number of set bits: %d\n",count);

	return 0;
}
