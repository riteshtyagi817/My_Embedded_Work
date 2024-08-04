#include"headers.h"
#include"declarations.h"
void * openFile(void *arg)
{
	int *iFd = (int *)malloc(1*sizeof(int));
	if(!iFd){
		perror("Malloc failed in openFile\n");
		return NULL;
	}
	int idx = 0;
	char *mode = (char *)arg;
#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif
	char *MD = (char *)arg;
	char *inpFile = (char *)malloc(20*sizeof(char));
	if(!inpFile)
	{
		perror("Malloc call failed\n");
		exit(EXIT_FAILURE);
	}
	memset(inpFile,'\0',20);
	printf("Enter the input file name for  mode: %s which will be used in compression:\n", mode);
	char ch;
	// another method to clear buffer
	//while((ch = getchar()) != '\n');
	do
	{
		*(inpFile+idx) = getchar();
		if ('\n' == *(inpFile +idx)) break; 
		else idx++;
	}while(1);
	*(inpFile + idx) = '\0';
	printf("You have entered filename as %s\n", inpFile);
	if(0 == strncmp("reading",mode,7))
	{
		printf("Inside reading mode\n");
		*iFd = open(inpFile,O_RDONLY);
		if(*iFd < 0)
		{
			perror("File open fail\n");
			return NULL;

		}
		
	}
	else if(0 == strncmp("writing",mode,7))
	{
		*iFd = open(inpFile,O_WRONLY);
		if(*iFd < 0)
		{
		
			printf("writing mode failed\n");
			*iFd = open(inpFile,O_CREAT|O_RDWR, 00777);
			if(*iFd < 0)
			{
				perror("File open fail\n");
				return NULL;
			}
			perror("File open fail\n");
			return NULL;

		}
	}
	else if(0 == strncmp("create",mode,5))
	{
		*iFd = open(inpFile,O_CREAT|O_RDWR,00777);
		if(*iFd < 0)
		{
			perror("File open fail\n");
			return NULL;
		}
	}


#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return (void *)iFd;
}
