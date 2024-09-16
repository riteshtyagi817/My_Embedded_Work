#include<stdio.h>
#include<stdlib.h>
void find_reverse(int arr[], int size)
{
	
	int start = 0;
	int end = size-1;
	int temp = 0;
	while(start < end)
	{
		int temp  = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
		
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
	printf("Enter the no of elements for reverse purpose\n");
	int n = 0;
	scanf("%d", &n);
	printf("Now enter the elements one by one\n");
	int arr[n];
	for(int i = 0; i < n;i++) scanf("%d", &arr[i]);
	printArray(arr,n);

	find_reverse(arr,n);

	printArray(arr,n);
	return 0;


}
