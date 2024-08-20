#include "headers.h"
#include "declarations.h"
#include "dataStructures.h"

void * compression(void *arg)
{

#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif
	
	int *status = (int *)malloc(1*sizeof(int));
	if(!status){
		perror("malloc failed in compression\n");
		return (int *)(*funcPtr[5])((void *)"failure");
	}
	*status = EXIT_SUCCESS;
	
	SCompress scmp;
	scmp.fileFd = (int *)malloc(1*sizeof(int));
	if(!scmp.fileFd)
	{
		perror("Malloc failed in compression\n");
		return (int *)(*funcPtr[5])((void *)"failure");
	}
	scmp.ma = NULL;
	

	// to clear the buffer for next functton call taking input file name
	getchar(); 
	scmp.fileFd = (int *)(*funcPtr[6])((void *)"reading");
	if(!scmp.fileFd)
	{
		perror("File opening failed\n");
		return (int *)(*funcPtr[5])((void *)"failure");

	}



	scmp.ma = (char *)(*funcPtr[7])((void *)scmp.fileFd);
	if(!scmp.ma)
	{
		perror("Error in CreateMasterArray\n");
		return NULL;
	}


	printf("%s\n",scmp.ma);
	
	int maxBits = *(int *)cMaxBits((void *)scmp.ma);
	printf("Max Bits need to represent all the unique characters is %d\n",maxBits);		
	if(maxBits >=2 && maxBits <= 8)
		(int *)(*funcPtr[8+maxBits])((void *)&scmp);


#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return (void *)status;
}
