#include"headers.h"
#include"declarations.h"
#include "dataStructures.h"
void * compression5(void *arg)
{
#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif
	int *status = NULL;
	int fs = 0;
	unsigned char byte = 0;
	MUnique input;

 	status = (int *)malloc(1*sizeof(int));
        if(!status){
                perror("malloc failed in compression 5\n");
                return (int *)(*funcPtr[5])((void *)"failure");
        }
        *status = EXIT_SUCCESS;
	SCompress *scmp = (SCompress *)arg;
	// first we need to find the input file size to read 
	
	fs = lseek(*(scmp->fileFd),0,SEEK_END) - 1;
	printf("The input file size is %d\n",fs);

	//need to reset the input file fd
	lseek(*(scmp->fileFd),0,SEEK_SET);

	// need to prepare master array for futher processing
	input.ma = scmp->ma;
	input.size = strlen(scmp->ma);
	printf("the size of ma is %d\n",input.size);

	// now we will need to start the while loop to process the character 
	// from the file and then write the encoding part to another file
	// so need to  open the file in create mode for compressed file
	printf("Please provide the compressed file name\n");










#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return (void *)status;
}
