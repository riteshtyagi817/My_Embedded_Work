#include<stdio.h>
#define SIZE 10
void printArray(int arr[])
{
	for(int i = 0; i < SIZE;i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
}
int main()
{
	int firstArray[SIZE];
	int secondArray[SIZE];
	int resultArray[SIZE];

	printf("Enter 10 integer array elements one by one for first array:\n");
        for(int i = 0; i < SIZE;i++) scanf("%d", &firstArray[i]);	
	printArray(firstArray);
	
	printf("Enter 10 integer array elements one by one for second array:\n");
        for(int i = 0; i < SIZE;i++) scanf("%d", &secondArray[i]);	
	printArray(secondArray);

	// sum of two arrays
	
	for(int i = 0; i < SIZE;i++)
	{
		resultArray[i] = firstArray[i] + secondArray[i];
		

	}


	printf("Displaying the sum of the above two arrays as the result array:\n");
        printArray(resultArray);
	return 0;	
}
