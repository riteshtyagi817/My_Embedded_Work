#include<stdio.h>
void cal_avg(int arr[], int size)
{
	double avg = 0.0;
	int sum = 0;
	for(int i = 0; i < size;i++)
	{
		sum += arr[i];

			
	}
	avg = (double)sum/size;
	printf("The average is %.2f\n",avg);
	

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
	printf("Enter the no of elements to find the average\n");
	int n = 0;
	scanf("%d", &n);
	printf("Now enter the elements one by one\n");
	int arr[n];
	for(int i = 0; i < n;i++) scanf("%d", &arr[i]);
	printArray(arr,n);

	cal_avg(arr,n);

	return 0;


}
