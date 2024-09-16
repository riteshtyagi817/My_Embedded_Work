#include<stdio.h>
void printArray(int arr[], int n)
{
	for(int i = 0; i < n;i++) printf("%d ", arr[i]);
	printf("\n");
	return ;

}
int main()
{
	printf("Enter the no of elements \n");
	int n = 0;
	scanf("%d", &n);
	printf("Now enter the elements one by one\n");
	int arr[n];
	int *ptr = arr;
	for(int i = 0; i < n;i++) scanf("%d", (ptr+i));
	printArray(arr,n);


	return 0;


}
