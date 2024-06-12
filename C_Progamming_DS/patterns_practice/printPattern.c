#include"headers.h"
#include"declarations.h"
void printPattern(int rows)
{
	printf("%s Begin\n", __func__);
	int cols = 2*rows -1;
	int stars = 0;
	int sp = 0;
	int spaces = 0;
	spaces = cols-rows;
	for(int i = 0; i < rows;i++)
	{
		sp = spaces;
		while(sp--) printf(" ");
		stars = rows;
		while(stars--)printf("*");
		printf("\n");
		spaces--;


	}

	printf("%s End\n", __func__);
	return;
}
