#include"headers.h"
#include"declarations.h"
void * deCompressionStats(void *arg)
{
	int *status = (int *)malloc(1*sizeof(int));
	if(!status){
		perror("Malloc failed in deCompressionStats\n");
		return NULL;
	}
#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif

#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return (void *)status;
}
