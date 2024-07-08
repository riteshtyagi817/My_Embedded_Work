#include"headers.h"
#include"declarations.h"
void * createMasterArray(void *arg)
{
	char *cM = NULL;
	int fs = 0;
	char ch  = '\0';
	int fileFd = *(int *)arg;
	char *copy = NULL;
#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif

	fs = lseek(fileFd,0,SEEK_END)-1;
 	printf("The size of the file is %d\n",fs);
	cM = (char *)malloc((fs+1)*sizeof(char));
	if(!cM)
	{
		perror("Malloc failed\n");
		return NULL;

	}
	copy = cM;
	memset(cM,'\0',fs+1);
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
 		//printf("%c",ch);
		*cM = ch;	
		cM++;
		fs--;

	}

#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return (void *)copy;
}
