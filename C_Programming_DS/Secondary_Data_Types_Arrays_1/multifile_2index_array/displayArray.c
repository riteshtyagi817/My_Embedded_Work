#include "headers.h"
#include "declarations.h"
void displayArray(int *input, int fi, int si)
{
	printf("%s Begin\n", __func__);
	int i = 0;
	int j = 0;
	for(i = 0; i < fi;i++)
	{	
		for(j = 0; j < si;j++)
		{
			printf("%d ", *(input + i*si + j));
		

		}
		printf("\n");
		

	} 	 
	

	printf("%s End\n", __func__);

	return ;
}
