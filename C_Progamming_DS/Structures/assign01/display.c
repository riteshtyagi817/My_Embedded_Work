#include "headers.h"
#include "declarations.h"

void display(Distance *out)
{
#ifdef DEBUG
	printf("%s Begin\n",__func__);
#endif
	printf("Feet: %d\' Inches: %f\"\n", out->feet, out->inches);
	
#ifdef DEBUG
	printf("%s End\n",__func__);
#endif
	
	return;
}
