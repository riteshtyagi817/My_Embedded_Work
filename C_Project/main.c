#include"headers.h"
int main()
{
#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif

	
#ifdef DEBUG
	printf("%s end\n", __func__);

#endif


	return 0;

}
