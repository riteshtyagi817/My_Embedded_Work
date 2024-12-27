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

	//SCompress scmp;
	//SCompress skey;
	DCompress dc;
	int fileFd = 0;
	int read_bytes = 0;
	char ch;

#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif
	// firstly we need to open the enc Key and populate the ma for decompression
	
	printf("please provide the compressed key name to open in decompression\n");
        getchar();
	fileFd = *(int *)(*funcPtr[6])((void *)"reading");
        if(fileFd < 0)
        {
                perror("File opening failed\n");
                return (int *)(*funcPtr[5])((void *)"failure");

	}
	dc.size = 0;
	while(1){

		read_bytes = read(fileFd,&ch,1);
		if(read_bytes == 0) break;
		printf("character read from key is %c\n",ch);
		*(dc.ma + dc.size) = ch;
		dc.size++;

	}
	printf("The size of ma is %d\n",dc.size);
	// now we need to find the code length for this and need to call the decompression
	// function accordingly
    
        int maxBits = *(int *)cMaxBits((void *)dc.ma);
        printf("Max Bits need to represent all the unique characters is %d\n",maxBits);             if(maxBits == 4){
		(int *)(*funcPtr[18])((void *)&dc);
	}



	/*
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
	*/

#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return (void *)status;
}
