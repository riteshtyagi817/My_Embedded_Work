#include "headers.h"
#include "declarations.h"
#include "dataStructures.h"

void * compression(void *arg)
{
	int *status = (int *)malloc(1*sizeof(int));
	if(!status){
		perror("malloc failed in compression\n");
	}
	*status = EXIT_SUCCESS;
	SCompress scmp;
	char ch = '\0';
	int fs = 0;
	scmp.fileFd = (int *)malloc(1*sizeof(int));
	if(!scmp.fileFd)
	{
		perror("Malloc failed in compression\n");
		return NULL;

	}
	scmp.ma = NULL;
	MUnique *input  = (MUnique *)malloc(sizeof(MUnique));
	if(!input)
	{
		perror("malloc failed\n");
		return NULL;
	}



#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif
	// to clear the buffer for next functton call taking input file name
	getchar(); 
	scmp.fileFd = (int *)(*funcPtr[6])((void *)"reading");
	if(!scmp.fileFd)
	{
		perror("File opening failed\n");
		return NULL;

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

	input->ma = scmp.ma;
	input->size = strlen(scmp.ma);
		
	if(maxBits >=2 && maxBits <= 8)
		(int *)(*funcPtr[8+maxBits])((void *)&scmp);

	// adding the compression logic from here

	// First part is to read the character one by one from the file again
	fs = lseek(*(scmp.fileFd), 0, SEEK_END) - 1;

	lseek(*(scmp.fileFd), 0, SEEK_SET);
	
	// for now I am assuming we will have max length of master array is 16 so that fit length can be 4 bits
	
	int idx = 0;
	char byte = '\0';
	char c  = '\0';
	int *writeFd = (int *)malloc(sizeof(int));
	if(!writeFd){

		perror("malloc failed\n");
		return NULL;
	}
	writeFd = (int *)(*funcPtr[6])((void *)"writing");
	if(!writeFd){
		perror("File opening failed\n");
		return NULL;
	}
	while(fs--)
	{
		if(idx % 2 == 0)
		{
			byte = '\0';
			byte = byte ^ byte;
			c = '\0';
		}
		//byte = byte ^ byte;
		int bytes = read(*(scmp.fileFd), &ch, 1);
		if(bytes < 0){
			printf("Not enough bytes to read from the file\n");
			break;
		}
		input->ch = ch;
		int *index = (int *)(*funcPtr[17])((void *)input);
		if(!index)
		{
			perror("some issue finding the pos from getPos function\n");
			break;
		}

		c = *index;
		
		c <<= 4;
		if(idx % 2 != 0){
			c >>= 4;

		}	
		byte = byte | c;
		
		int count = 8;
		char check = byte;
		while(count--)
		{
			if(check & 1) printf("1");
			else printf("0");
			check >>= 1;
			
		}
		printf("\n");
		printf("byte formed %c\n", byte);
		
		if(idx % 2 != 0)
		{
			// putting the byte into the another file

			int bts = write(*(writeFd), &byte, 1);
			if(bts < 0)
			{
				perror("write was not successful\n");
				break;
			}
		}
		idx++;
	
	}
	close(*(scmp.fileFd));
	close(*writeFd);
	// need to check later if other deallocations are needed

#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return (void *)status;
}
