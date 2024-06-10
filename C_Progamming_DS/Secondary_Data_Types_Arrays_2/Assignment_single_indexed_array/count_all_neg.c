#include<stdio.h>
void count_negative(int arr[], int size)
{
	int count = 0;
	for(int i = 0; i < size;i++)
	{
		if(arr[i]  < 0) count++;
				
			
	}
	printf("The count of the negative numbers is %d\n", count);

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
	printf("Enter the size of the array\n");
	int n = 0;
	scanf("%d", &n);
	printf("Now enter the elements one by one\n");
	int arr[n];
	for(int i = 0; i < n;i++) scanf("%d", &arr[i]);
	printArray(arr,n);
	count_negative(arr,n);

	return 0;


}
