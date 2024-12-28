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
	unsigned char readCh;
        *status = EXIT_SUCCESS;
	DCompress *dc = (DCompress *)arg;
	int fileSize = lseek(dc->ifd, 0, SEEK_END);
	printf("The compressed file size is %d\n",fileSize);
	lseek(dc->ifd, 0, SEEK_SET);
	while(fileSize--){
	
		bytes_read = read(dc->ifd, &ch,1);
		if(bytes_read <= 0){
			printf("read not successful\n");
			break;
		}
		copy = ch;
		ch = ch >> 4;
		int idx = (int)ch;
		readCh = *(dc->ma + idx);
		printf("character read is %c\n",readCh);
		copy = copy & 0x0F;
		idx = (int)copy;
		readCh = *(dc->ma + idx);
		printf("character read is %c\n",readCh);



			


	}


#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif


#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return (void *)status;
}
