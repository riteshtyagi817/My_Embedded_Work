#include"headers.h"
#include"declarations.h"
#include"dataStructures.h"
void * compression4(void *arg)
{
#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif

	int *status = NULL;
	int fs = 0;

	SCompress *scmp = (SCompress *)(arg);

        int idx = 0;
        unsigned char byte = '\0';
        unsigned char c  = '\0';
	unsigned char ch = '\0';
	int bts = 0;
	int count = 8;
	unsigned char check = '\0';
	MUnique *input  = (MUnique *)malloc(sizeof(MUnique));
        if(!input)
        {
                perror("malloc failed\n");
                return (int *)(*funcPtr[5])((void *)"failure");
        }


        // finding the file size first
        fs = lseek(*(scmp->fileFd), 0, SEEK_END) - 1;
	printf("file size is %d\n", fs);


	// to read from the start again resetting 
        lseek(*(scmp->fileFd), 0, SEEK_SET);

        // for now I am assuming we will have max length of master array is 16 so that fit length can be 4 bits

	printf("Please provide the file name as the compressed file\n");
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
   	input->ma = scmp->ma;
        input->size = strlen(scmp->ma);

	while(fs){
		
        	byte = '\0';
		byte = byte ^ byte;
		c = '\0';
		
                int bytes = read(*(scmp->fileFd), &ch, 1);
                if(bytes < 0){
                        printf("Not enough bytes to read from the file\n");
                        break;
                }
		fs--;
                input->ch = ch;
		printf(" char passing %c\n",input->ch);
                int *index = (int *)(*funcPtr[17])((void *)input);
                if(!index)
                {
                        perror("some issue finding the pos from getPos function\n");
                        break;
                }
                c = *index;

                c <<= 4;

                byte = byte | c;

	
		
		if(0 == fs){

			byte |= 0x0F;

                	count = 8;
                	check = byte;
			while(count--)
			{
				if(check & 1) printf("1");
				else printf("0");
				check >>= 1;
			}
			printf("\n");
			printf("last byte formed %c\n", byte);

			bts = write(*(writeFd), &byte, 1);
			if(bts < 0){
				perror("write was not successful\n");
				break;
			}
			break;

		}




		// repeating the above for another character
		
		
                bytes = read(*(scmp->fileFd), &ch, 1);
                if(bytes < 0){
                        printf("Not enough bytes to read from the file\n");
                        break;
                }
		fs--;
                input->ch = ch;
		printf(" char passing %c\n",input->ch);
                index = (int *)(*funcPtr[17])((void *)input);
                if(!index)
                {
                        perror("some issue finding the pos from getPos function\n");
                        break;
                }
                c = *index;

                c <<= 4;
		c >>= 4;

                byte = byte | c;

                count = 8;
                check = byte;
                while(count--)
                {
                        if(check & 1) printf("1");
                        else printf("0");
                        check >>= 1;
                }
                printf("\n");
                printf("byte formed %c\n", byte);
		
		bts = write(*(writeFd), &byte, 1);
		if(bts < 0){
			perror("write was not successful\n");
			break;
                }


	}




	/* Although this approach saves duplicating code two times in the while loop but it might not be that much readable to so commenting it for now

	while(fs--)
        {
                if(idx % 2 == 0)
                {
                        byte = '\0';
                        byte = byte ^ byte;
                        c = '\0';
                }
                //byte = byte ^ byte;
                int bytes = read(*(scmp->fileFd), &ch, 1);
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
		// handling the case when we have odd number of total total characters in the file
		if( 1 == fs && idx % 2 == 0)
		{
			byte = byte | 0x0F;
		}

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

        } */

	// need to write the ma into some file and it will act as the key

	printf("Please provide the file name which will be used as the key\n");
        int *keyFd = (int *)malloc(sizeof(int));
        if(!keyFd){

                perror("malloc failed\n");
                return NULL;
        }
        keyFd = (int *)(*funcPtr[6])((void *)"creating");
        if(!keyFd){
                perror("File opening failed\n");
	}
	
	bts = write(*(keyFd), input->ma, input->size);
	if(bts < 0){
		perror("write was not successful\n");
		return NULL;
	}
	// need to free the data structures as well


        close(*(scmp->fileFd));
        close(*writeFd);
        // need to check later if other deallocations are needed

#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return (void *)status;
}
