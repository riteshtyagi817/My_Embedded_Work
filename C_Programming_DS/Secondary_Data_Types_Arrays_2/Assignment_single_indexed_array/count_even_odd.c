#include<stdio.h>
void count_even_odd(int arr[], int size)
{
	int count_even = 0;
	int count_odd = 0;
	for(int i = 0; i < size;i++)
	{
		if(arr[i] % 2 == 0) count_even++;
		else count_odd++;

			
	}
	printf("The even elements are %d and odd elements are %d\n", count_even, count_odd);
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
	printf("displaying the array\n");
	printArray(arr, n);
	printf("Printing the count of even and odd elements in the given array\n");
	count_even_odd(arr,n);

	return 0;


}
