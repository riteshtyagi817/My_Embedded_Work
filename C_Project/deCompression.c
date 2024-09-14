#include "headers.h"
#include "declarations.h"
#include "dataStructures.h"

void * deCompression(void *arg){
	int *status = (int *)malloc(1*sizeof(int));
	*status = EXIT_SUCCESS;
	if(!status){
		perror("malloc failed in decompression\n");
		return NULL;

	}

	SCompress scmp;
	SCompress skey;

#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif
	// first we need to open the Compressed file 
	scmp.fileFd = (int *)malloc(1*sizeof(int));
	if(!scmp.fileFd)
        {
                perror("Malloc failed in compression\n");
                return (int *)(*funcPtr[5])((void *)"failure");
        }

	printf("please provide the compressed file name to open in decompression\n");
	getchar();
	scmp.fileFd = (int *)(*funcPtr[6])((void *)"reading");
	if(!scmp.fileFd)
        {
                perror("File opening failed\n");
                return (int *)(*funcPtr[5])((void *)"failure");

        }
	printf("opened fd value %d after opening compressed file\n",*(scmp.fileFd)); 

	// Now we need to open the compressed Key
	skey.fileFd = (int *)malloc(1*sizeof(int));
        if(!skey.fileFd)
        {
                perror("Malloc failed in compression\n");
                return (int *)(*funcPtr[5])((void *)"failure");
        }

	printf("please provide the compressed key name to open in decompression\n");
        skey.fileFd = (int *)(*funcPtr[6])((void *)"reading");
        if(!skey.fileFd)
        {
                perror("File opening failed\n");
                return (int *)(*funcPtr[5])((void *)"failure");

        }
	
	
	printf("opened fd value %d after opening compressed key\n",*(skey.fileFd)); 


#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return (void *)status;
}
