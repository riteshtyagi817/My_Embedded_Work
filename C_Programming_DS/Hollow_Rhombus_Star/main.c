#include "headers.h"
#include "declarations.h"
int main()
{
	printf("%s Begin\n", __func__);
	int no_rows = 0;
	no_rows = getRows();
	printPattern();
	printf("%s End\n", __func__);

	return 0;
}
