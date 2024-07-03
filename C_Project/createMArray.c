#include"headers.h"
#include"declarations.h"
void * createMasterArray(void *arg)
{
	char *cM = NULL;
	int fs = 0;
	char ch  = '\0';
	int fileFd = *(int *)arg;
#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif
	fs = lseek(fileFd,0,SEEK_END)-1;
 	printf("The size of the file is %d\n",fs);
	// again resetting it to the start
	lseek(fileFd,0,SEEK_SET);
	while(fs)
	{
		int num = read(fileFd,&ch,1);
 		if(num < 0)
		{
 			perror("read from the file failed in createMaster function\n");
 			exit(EXIT_FAILURE);
 		}
 		printf("%c",ch);
		fs--;

	}

#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return (void *)cM;
}
