#include"headers.h"
#include"declarations.h"
int openFile(char *mode)
{
	int iFd = 0;
	int idx = 0;
#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif
	char *MD = mode;
	char *inpFile = (char *)malloc(20*sizeof(char));
	if(!inpFile)
	{
		perror("Malloc call failed\n");
		exit(EXIT_FAILURE);
	}
	memset(inpFile,'\0',20);
	printf("Enter the input file name for reading purpose which will be used in compression: ");
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
		iFd = open(inpFile,O_RDONLY);
		if(iFd < 0)
		{
			perror("File open fail\n");
			exit(EXIT_FAILURE);

		}
		
	}
	else if(0 == strncmp("writing",mode,7))
	{
		iFd = open(inpFile,O_WRONLY);
		if(iFd < 0)
		{
			perror("File open fail\n");
			exit(EXIT_FAILURE);

		}
	}
	else if(0 == strncmp("create",mode,5))
	{
		iFd = open(inpFile,O_CREAT|O_RDWR);
		if(iFd < 0)
		{
			perror("File open fail\n");
			exit(EXIT_FAILURE);

		}
	}


#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return iFd;
}
