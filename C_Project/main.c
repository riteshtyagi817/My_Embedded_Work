#include "headers.h"
#include "declarations.h"
int main()
{
#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif
	mainMenu();
	
#ifdef DEBUG
	printf("%s end\n", __func__);

#endif


	return 0;

}
