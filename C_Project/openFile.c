#include"headers.h"
#include"declarations.h"
void * openFile(void *arg)
{
#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif
	int *iFd = (int *)malloc(1*sizeof(int));
	if(!iFd){
		perror("Malloc failed in openFile\n");
		//return NULL;
		return (int *)(*funcPtr[5])((void *)"failure");
	}

	int idx = 0;
	char *mode = (char *)arg;
	char *MD = (char *)arg;

	char *inpFile = (char *)malloc(20*sizeof(char));
	if(!inpFile)
	{
		perror("Malloc call failed\n");
		//exit(EXIT_FAILURE);
		return (int *)(*funcPtr[5])((void *)"failure");
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
			//return NULL;
			return (int *)(*funcPtr[5])((void *)"failure");

		}
		
	}
	else if(0 == strncmp("writing",mode,7))
	{
		*iFd = open(inpFile,O_WRONLY);
		if(*iFd < 0)
		{
			perror("File open fail\n");
			//return NULL;
			return (int *)(*funcPtr[5])((void *)"failure");

		}
	}
	else if(0 == strncmp("creating",mode,8))
	{
		*iFd = open(inpFile,O_CREAT|O_WRONLY,00750);
		if(*iFd < 0)
		{
			perror("File creation fail\n");
			//return NULL;
			return (int *)(*funcPtr[5])((void *)"failure");
		}
		
	}


#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return (void *)iFd;
}
