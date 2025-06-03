#include<stdio.h>
int main(){

	int a, b;
	printf("Enter the two numbers: ");
	scanf("%d%d",&a,&b);
	int max_num = (a > b)?a:b;
	printf("The larger number is %d\n",max_num);
	return 0;

}
