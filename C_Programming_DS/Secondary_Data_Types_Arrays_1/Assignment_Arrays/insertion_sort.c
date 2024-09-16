#include<stdio.h>
void sortArray(int arr[], int size)
{
	// let's sort it using insertion sort for now
	for(int i = 1; i < size;i++)
	{
		int ele = arr[i];
		int j = i-1;
		while(j >= 0 && arr[j] > ele)
		{
			arr[j+1] = arr[j];
		        j--;	
		}
		arr[j+1] = ele;

	}
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
	printf("Enter the no of elements to sort\n");
	int n = 0;
	scanf("%d", &n);
	printf("Now enter the elements one by one\n");
	int arr[n];
	for(int i = 0; i < n;i++) scanf("%d", &arr[i]);
	printArray(arr,n);
	sortArray(arr,n);
	printArray(arr,n);
	return 0;


}
