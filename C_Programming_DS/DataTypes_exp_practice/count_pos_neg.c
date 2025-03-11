#include<stdio.h>
int main(){
	
	int first,second,third,forth,five;
	int count_pos = 0;
	int count_neg  = 0;
	printf("Input the first number: ");
	scanf("%d",&first);
	if(first >= 0 ) count_pos++;
	else count_neg++;
	printf("Input the second number: ");
	scanf("%d",&second);
	if(second >= 0 ) count_pos++;
	else count_neg++;
	printf("Input the third number: ");
	scanf("%d",&third);
	if(third >= 0 ) count_pos++;
	else count_neg++;
	printf("Input the forth number: ");
	scanf("%d",&forth);
	if(forth >= 0 ) count_pos++;
	else count_neg++;
	printf("Input the five number: ");
	scanf("%d",&five);
	if(five >= 0 ) count_pos++;
	else count_neg++;

	printf("Expected Output: \n");
	printf("Number of positive numbers: %d\n",count_pos);
	printf("Number of negative numbers: %d\n",count_neg);
	return 0;

}
