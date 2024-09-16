#include<stdio.h>
#define SIZE 10
int main()
{	
	int input[SIZE];
	printf("Enter SIZE integer array elements one by one \n");
	for(int i = 0; i < SIZE;i++)
	{
		scanf("%d", &input[i]);

	}
	printf("Displaying array elements\n");
	for(int i  = 0; i < SIZE;i++)
	{
		printf("%d ", input[i]);

	}
	printf("\n");


	return 0;

}
