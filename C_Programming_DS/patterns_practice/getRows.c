#include "headers.h"
#include "declarations.h"
int getRows()
{
	int rows = 0;
	printf("%s Begin\n", __func__);
	printf("Enter the no of rows\n");
	scanf("%d", &rows);
	printf("%s End\n", __func__);
	return rows;

}
