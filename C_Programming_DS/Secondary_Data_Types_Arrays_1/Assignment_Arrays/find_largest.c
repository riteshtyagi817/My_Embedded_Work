#include<stdio.h>
void find_largest(int arr[], int size)
{
	int largest = arr[0];
	for(int i = 1; i < size;i++)
	{
		if(arr[i] > largest)
		{
			largest = arr[i];

		}
		
			
	}
	
	printf("The largest is %d\n",largest);
	

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
	printf("Enter the no of elements to find the largest element\n");
	int n = 0;
	scanf("%d", &n);
	printf("Now enter the elements one by one\n");
	int arr[n];
	for(int i = 0; i < n;i++) scanf("%d", &arr[i]);
	printArray(arr,n);

	find_largest(arr,n);

	return 0;


}
