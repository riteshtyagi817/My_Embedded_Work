#include "headers.h"
#include "declarations.h"
int main()
{
	int no_rows = 0;
	int no_cols = 0;
	printf("%s Begin\n", __func__);
	no_rows = getRows();
	printPattern(no_rows);
	printf("%s End\n", __func__);
	return 0;
}
