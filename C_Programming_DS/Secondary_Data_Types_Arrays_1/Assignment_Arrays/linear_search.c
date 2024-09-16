#include<stdio.h>
void find_index(int arr[], int size,int key)
{
	for(int i = 0; i < size;i++)
	{
		if(arr[i] == key)
		{
			printf("\nKey: %d is found at the location: %d\n", key, i);
			return;
		}
		
			
	}
	
	printf("\nkey: %d is not found\n", key); 	

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
	printf("Enter the no of elements for linear search implementation\n");
	int n = 0;
	scanf("%d", &n);
	printf("Now enter the elements one by one\n");
	int arr[n];
	for(int i = 0; i < n;i++) scanf("%d", &arr[i]);
	printArray(arr,n);
	
	int key = 0;
	printf("Enter the key to be searched using linear search\n");
	scanf("%d", &key);		

	find_index(arr,n,key);

	return 0;


}
