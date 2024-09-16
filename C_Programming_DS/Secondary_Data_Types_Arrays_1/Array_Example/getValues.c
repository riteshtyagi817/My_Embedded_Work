#include "headers.h"
#include "declarations.h"
int getValues(int *array, int size)
{
	int i = 0;
	printf("%s Begin\n", __func__);
	for(i  = 0; i < size;i++)
		scanf("%d", (array+i));

	printf("%s End\n", __func__);

	return 0;

}
