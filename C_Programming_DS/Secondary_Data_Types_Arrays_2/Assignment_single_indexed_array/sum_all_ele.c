#include<stdio.h>
void print_sum(int arr[], int size)
{
	int sum = 0;
	for(int i = 0; i < size;i++)
	{
		sum += arr[i];

			
	}
	printf("The sum of all the elements is %d\n", sum);
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
	for(int i = 0; i < n;i++) scanf("%d", &arr[i]);
	printArray(arr, n);
	printf("Printing the sum of all the array elements\n");
	print_sum(arr,n);

	return 0;


}
