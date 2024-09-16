#include<stdio.h>
void copy_array(int arr[], int copy[], int size)
{
	for(int i = 0; i < size;i++)
	{
		copy[i] = arr[i];
			
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
	printf("Enter the size of the array \n");
	int n = 0;
	scanf("%d", &n);
	printf("Now enter the elements one by one\n");
	int arr[n];
	int copy[n];
	for(int i = 0; i < n;i++) scanf("%d", &arr[i]);
	printArray(arr, n);
	printf("after copy printing the another array\n");
	copy_array(arr,copy,n);
	printArray(copy, n);
	

	return 0;


}
