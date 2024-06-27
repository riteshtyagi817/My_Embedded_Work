#include"headers.h"
#include"declarations.h"
int compression()
{
	int fileFd = 0;
	int fs = 0;
	char ch[1];
#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif
	// to clear the buffer for next functton call taking input file name
	getchar(); 
	fileFd = (*openFp)("reading");
	if(fileFd < 0)
	{
		perror("File opening failed\n");
		return EXIT_FAILURE;

	}
	fs = lseek(fileFd,0,SEEK_END)-1;
	printf("The size of the file is %d\n",fs);
	// again resetting it to the start
	lseek(fileFd,0,SEEK_SET);
	while(fs)
	{
		int num = read(fileFd,ch,1);
		if(num < 0)
		{
			perror("read from the file failed in compression function\n");
			exit(EXIT_FAILURE);
		}
		printf("%c",ch[0]);
		fs--;

	}


#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return EXIT_SUCCESS;
}
