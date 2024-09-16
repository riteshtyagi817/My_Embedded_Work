#include<stdio.h>
void searchArray(int arr[], int n, int key)
{
	for(int i = 0; i < n;i++)
	{
		if(arr[i] == key)
		{
			printf("The average %d is present inside the array \n",key);
			return;

		}
	}
	printf("The average %d is not present inside the array\n",key);
	return;
}
void sortArray(int arr[], int size)
{
	// let's try bubble sort for fun 
	int temp = 0;
	for(int pass = 0; pass < size-1;pass++)
	{
		for(int j = 0; j  < size-pass-1;j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}

		}

	}
	printf("The Second largest element is %d\n", arr[size-2]);
	printf("The Second smallest element is %d\n", arr[1]);
	int avg = (arr[size-2] + arr[1])/2;
	searchArray(arr,size,avg);
		

	return;
}
void printArray(int arr[], int n)
{
	for(int i = 0; i < n;i++) printf("%d ", arr[i]);
	printf("\n");
	return ;

}
int main()
{
	printf("Enter the no of elements to find the second largest ,smallest and other results\n");
	int n = 0;
	scanf("%d", &n);
	printf("Now enter the elements one by one\n");
	int arr[n];
	for(int i = 0; i < n;i++) scanf("%d", &arr[i]);
	printArray(arr,n);
	sortArray(arr,n);

	return 0;


}
