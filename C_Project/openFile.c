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
	while((ch = getchar()) != '\n');
	do
	{
		*(inpFile+idx) = getchar();
		if ('\n' == *(inpFile +idx)) break; 
		else idx++;
	}while(1);
	*(inpFile + idx) = '\0';
	printf("You have entered filename as %s\n", inpFile);


#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return iFd;
}
