#include<stdio.h>
void print_negative(int arr[], int size)
{
	for(int i = 0; i < size;i++)
	{
		if(arr[i]  < 0)
			printf("%d ", arr[i]);

			
	}
	printf("\n");
	

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
	printf("Enter the no of elements for printing negative elements\n");
	int n = 0;
	scanf("%d", &n);
	printf("Now enter the elements one by one\n");
	int arr[n];
	for(int i = 0; i < n;i++) scanf("%d", &arr[i]);
	printf("Printing negative elements\n");
	print_negative(arr,n);

	return 0;


}
