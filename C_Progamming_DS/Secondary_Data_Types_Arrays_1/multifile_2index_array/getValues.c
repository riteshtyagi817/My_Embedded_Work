#include "headers.h"
#include "declarations.h"
void getValues(int *input, int fi, int si)
{
	printf("%s Begin\n", __func__);
	int i = 0;
	printf("Enter the values one by one for %d elements\n", fi*si);
	for(i = 0; i < (fi*si);i++)
	{
		scanf("%d",(input+i));
		

	}
	printf("%s End\n", __func__);
	return ;

}	
