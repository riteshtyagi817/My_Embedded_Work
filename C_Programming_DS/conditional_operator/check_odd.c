#include<stdio.h>
int main(){

	int num;
	printf("Enter the num to check: ");
	scanf("%d",&num);
	char *result = (num%2 == 0)?"Even":"Odd";
	printf("The num is %s\n",result);
	return 0;

}
