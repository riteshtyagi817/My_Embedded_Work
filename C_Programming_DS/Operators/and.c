#include<stdio.h>
int main(){

	int num;
	printf("Enter the number to check odd even: ");
	scanf("%d",&num);
	if(num & 1){

		printf("The number is odd.\n");
	}else{

		printf("The number is even.\n");
	}

}
