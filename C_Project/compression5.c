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
	int writeFd = 0;
	unsigned char ch = '\0';
	int read_bytes = 0;
	unsigned char c = '\0';
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
 	writeFd = *(int *)(*funcPtr[6])((void *)"creating");
        if(writeFd < 0){
                perror("File opening failed\n");         
	}
	unsigned char copy = 0;
	while(input.size--){
		

		byte ^= byte;
		read_bytes = (*(scmp->fileFd),&ch,1);
		if(read_bytes <= 0){

			printf("could not read anything from the file\n");
			break;
		}
		input.ch = ch;
                printf(" char passing %c\n",input.ch);
                int *index = (int *)(*funcPtr[17])((void *)&input);
                if(!index)
                {
                        perror("some issue finding the pos from getPos function\n");
                        break;
                }
		c = *index;
		c <<= 3;
		byte |= c;
		// need to check if this is the last byte we read 
		// This handling I will do later on
		


		// now need to read another byte

		read_bytes = (*(scmp->fileFd),&ch,1);
		if(read_bytes <= 0){

			printf("could not read anything from the file\n");
			break;
		}
		input.ch = ch;
                printf(" char passing %c\n",input.ch);
                index = (int *)(*funcPtr[17])((void *)&input);
                if(!index)
                {
                        perror("some issue finding the pos from getPos function\n");
                        break;
                }

		c = *index;
		copy = c;
		c >>= 2;
		byte |= c;
		// byte has been formed
		// printing the byte
		int count = 8;
		while(count--){

			if(byte & 1) printf("1");
			else printf("0");
			byte >>= 1;
		}
		break;
		


	}










#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return (void *)status;
}
