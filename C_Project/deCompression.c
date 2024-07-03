#include"headers.h"
#include"declarations.h"
void * deCompression(void *arg){
	int *status = (int *)malloc(1*sizeof(int));
	*status = EXIT_SUCCESS;
	if(!status){
		perror("malloc failed in decompression\n");
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
