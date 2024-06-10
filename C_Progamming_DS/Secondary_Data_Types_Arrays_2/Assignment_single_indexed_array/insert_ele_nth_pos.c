#include<stdio.h>
void insert_nth(int arr[], int size,int pos, int ele)
{
	
	int i  = 0;
	for(i = size-1; i >= pos;i--)
	{
		arr[i+1] = arr[i];

			
	}
	arr[i+1] = ele;
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
	int arr[n+1];
	for(int i = 0; i < n;i++) scanf("%d", &arr[i]);
	printf("Array print\n");
	printArray(arr, n);
	printf("Enter the element to insert and which position\n");
	printf("Element: ");
	int ele = 0;
	int pos = 0;
	scanf("%d", &ele);	
	printf("Pos: ");
	scanf("%d", &pos);
	insert_nth(arr, n , pos, ele);
	printf("Array print\n");
	printArray(arr, n+1);
	return 0;


}
