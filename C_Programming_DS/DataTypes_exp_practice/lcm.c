#include<stdio.h>
int find_lcm(int a, int b){

	int start = (a >=b)?a:b;
	int end = a*b;
	for(int i = start;i <= end;i++){

		if(i%a == 0 && i%b == 0)return i;

	}
	return end;

}
int main(){

	int num1,num2;
	printf("Enter the two numbers to find LCM:\n");
	printf("First Num: ");
	scanf("%d",&num1);
	printf("Second Num: ");
	scanf("%d",&num2);
	int result = find_lcm(num1,num2);

	printf("The lcm of two numbers %d and %d is %d.\n",num1, num2, result);
	return 0;
}
