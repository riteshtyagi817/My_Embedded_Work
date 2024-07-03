#include"headers.h"
#include"declarations.h"
void * compressionStats(void *)
{
	int *status = (int *)malloc(1*sizeof(int));
	if(!status){
		perror("malloc failed in compressionStats\n");
		return NULL;

	}
	*status = EXIT_SUCCESS;
#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif

#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return (void *)status;
}
