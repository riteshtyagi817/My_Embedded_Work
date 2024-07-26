#include"headers.h"
#include"declarations.h"
void * compression(void *arg)
{
	int *status = (int *)malloc(1*sizeof(int));
	if(!status){
		perror("malloc failed in compression\n");
	}
	*status = EXIT_SUCCESS;
	int *fileFd = (int *)malloc(1*sizeof(int));
	if(!fileFd)
	{
		perror("Malloc failed in compression\n");
		return NULL;

	}
	char *cM = NULL;
#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif
	// to clear the buffer for next functton call taking input file name
	getchar(); 
	fileFd = (int *)(*funcPtr[6])((void *)"reading");
	if(!fileFd)
	{
		perror("File opening failed\n");
		return NULL;

	}
	cM = (char *)(*funcPtr[7])((void *)fileFd);
	if(!cM)
	{
		perror("Error in CreateMasterArray\n");
		return NULL;
	}
	printf("%s\n",cM);
	int maxBits = *(int *)cMaxBits((void *)cM);
	printf("Max Bits need to represent all the unique characters is %d\n",maxBits);

#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return (void *)status;
}
