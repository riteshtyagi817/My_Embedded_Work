#include<stdio.h>
int main(){

	int num = 0;
	printf("Enter the num to check: ");
	scanf("%d",&num);
	char *result = (num > 0)?"Positive":"Negative";
	printf("Num is %s\n",result);
	return 0;


}
