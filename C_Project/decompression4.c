#include"headers.h"
#include"declarations.h"
#include"dataStructures.h"
void * decompression4(void *arg)
{
	int *status = (int *)malloc(1*sizeof(int));
        if(!status){
                perror("malloc failed in compression\n");
                return (int *)(*funcPtr[5])((void *)"failure");
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
