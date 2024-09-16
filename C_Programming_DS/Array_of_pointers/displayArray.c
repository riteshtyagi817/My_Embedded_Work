#include"headers.h"
#include"declarations.h"
void displayArray(int **array, int size)
{
	int i = 0;
	int j = 0;
	printf("%s Begin\n", __func__);
	for(i = 0; i < size;i++)
	{
		printf("displaying values for %d index\n", i);
		for(j = 0; j < size;j++)
		{
			printf("%d ", *(*(array+i)+j));


		}
		printf("\n");


	}
	printf("%s End\n", __func__);
	return;
}
