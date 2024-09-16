#include<stdio.h>
void printArray(int *arr, int n)
{
	for(int i = 0; i < n;i++) {

		printf("Index: %d  Element: %d ",i, *(arr+i));
		printf("\n");
	}
	return ;

}
int main()
{
	printf("Enter the no of elements \n");
	int n = 0;
	int i = 0;
	int *input_ptr = NULL;
	int *even_ptr = NULL;
	int *odd_ptr = NULL;
	
	scanf("%d", &n);
	printf("Now enter the elements one by one\n");
	int arr[n];
	int even_arr[n];
	int odd_arr[n];
	input_ptr = arr;
	even_ptr = even_arr;
	odd_ptr = odd_arr;

	for(i = 0; i < n;i++) scanf("%d", (input_ptr+i));
	
	// storing even and odd elements separately in the  arrays
	for(i = 0; i < n;i++)
	{
		if(*(input_ptr+i)%2 == 0) *(even_ptr+i) = *(input_ptr+i);
		else *(even_ptr+i) = -1;

	}
	for(i = 0; i < n;i++)
	{
		if(*(input_ptr+i)%2 != 0) *(odd_ptr+i) = *(input_ptr+i);
		else *(odd_ptr+i) = -1;
	}

	printf("printing input array\n");	
	printArray(input_ptr,n);
	printf("printing even array\n");	
	printArray(even_ptr,n);
	printf("printing odd array\n");	
	printArray(odd_ptr,n);

	return 0;


}
