#include<stdio.h>
int main(){


	int num1, num2;
	printf("Enter the two numbers: ");
	scanf("%d%d",&num1, &num2);
	if(num1 > num2){
		printf("%d is larger.\n",num1);
	}else if(num1 < num2){
		printf("%d is larger.\n",num2);
	}else{
		printf("both are equal.\n");
	}

	return 0;
}
