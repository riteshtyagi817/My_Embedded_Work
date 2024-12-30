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
	unsigned char ch;
	unsigned char copy;
	int bytes_read = 0;
	int bytes_write = 0;
	unsigned char readCh;
	int wFd = 0;
        *status = EXIT_SUCCESS;
	DCompress *dc = (DCompress *)arg;
	int fileSize = lseek(dc->ifd, 0, SEEK_END);
	printf("The compressed file size is %d\n",fileSize);
	lseek(dc->ifd, 0, SEEK_SET);
	// we will need to open the file in writing mode to write the output
	printf("Enter the file name to write the decrypted output\n");
	wFd = *(int *)(*funcPtr[6])((void *)"creating");
	if(wFd < 0){
		perror("could not open the file to write the decrypted output\n");
		return (int *)(*funcPtr[5])((void *)"failure");
	}

	while(fileSize--){
	
		bytes_read = read(dc->ifd, &ch,1);
		if(bytes_read <= 0){
			printf("read not successful\n");
			break;
		}
		copy = ch;
		ch = ch >> 4;
		int idx = (int)ch;
		if(idx >= 0 && idx < 15){
			readCh = *(dc->ma + idx);
			printf("character read is %c\n",readCh);
			bytes_write = write(wFd,&readCh,1);
			if(bytes_write <= 0){
				printf("could not write any bytes\n");

			}

		}
		copy = copy & 0x0F;
		idx = (int)copy;
		if(idx >= 0 && idx < 15){
			readCh = *(dc->ma + idx);
			printf("character read is %c\n",readCh);
			bytes_write = write(wFd,&readCh,1);
			if(bytes_write <= 0){
				printf("could not write any bytes\n");

			}
		}


	}


#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif


#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return (void *)status;
}
