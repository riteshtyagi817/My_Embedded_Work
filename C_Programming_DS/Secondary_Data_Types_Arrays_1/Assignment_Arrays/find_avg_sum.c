#include<stdio.h>
void find_avg_sum(int arr[], int size)
{
	int sum = 0;
	for(int i = 0; i < size;i++)
	{
		sum += arr[i];
		
			
	}
	
	printf("The sum is %d\n",sum);	
	printf("The average is %.2f\n",(float)sum/size);

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
	printf("Enter the no of elements to find the sum and average\n");
	int n = 0;
	scanf("%d", &n);
	printf("Now enter the elements one by one\n");
	int arr[n];
	for(int i = 0; i < n;i++) scanf("%d", &arr[i]);
	printArray(arr,n);

	find_avg_sum(arr,n);

	return 0;


}
