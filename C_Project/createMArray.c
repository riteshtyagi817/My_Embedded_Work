#include"headers.h"
#include "dataStructures.h"
#include"declarations.h"
void * createMasterArray(void *arg)
{
	MUnique *unique = (MUnique *)malloc(sizeof(MUnique));
	if(!unique)
	{
		perror("Malloc failed in createMasterArray\n");
		return NULL;
	}
	//char *cM = NULL;
	int fs = 0;
	//char ch  = '\0';
	int fileFd = *(int *)arg;
	unique->size = 0;
	unique->ch  = '\0';
	char *copy = NULL;
#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif

	fs = lseek(fileFd,0,SEEK_END)-1;
 	printf("The size of the file is %d\n",fs);
	unique->ma = (char *)malloc((fs+1)*sizeof(char));
	if(!unique->ma)
	{
		perror("Malloc failed\n");
		return NULL;

	}
	copy = unique->ma;
	memset(unique->ma,'\0',fs+1);
	// again resetting it to the start
	lseek(fileFd,0,SEEK_SET);
	while(fs)
	{
		unique->ch = '\0';
		int num = read(fileFd,&(unique->ch),1);
		//printf("next char read is %c\n",unique->ch);
 		if(num < 0)
		{
 			perror("read from the file failed in createMaster function\n");
 			exit(EXIT_FAILURE);
 		}
 		//printf("%c",ch);
		if(*(int *)(*funcPtr[8])((void *)unique))
		{
			*(unique->ma + unique->size) = unique->ch;
			//(unique->ma)++;
			(unique->size)++;
			//printf("size: %d\n",unique->size);
		}
		fs--;

	}

#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return (void *)copy;
}
