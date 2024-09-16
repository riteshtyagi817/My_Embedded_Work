#include "headers.h"
#include "selectionSort.h"
void selectionSort(int arr[], int size)
{
	int small_idx = 0;
	int temp = 0;
	for(int i = 0; i < size;i++)
	{
		small_idx = i;
		for(int j = i+1; j < size;j++)
		{
			if(arr[j] < arr[small_idx])
			{
				small_idx = j;
			}
		}
		temp  = arr[small_idx];
		arr[small_idx] = arr[i];
		arr[i] = temp;

	}


}
