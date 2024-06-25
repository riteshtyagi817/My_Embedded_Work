#include"headers.h"
#include"declarations.h"
int compression()
{
	int fileFd = 0;
#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif
	fileFd = (*openFp)("r");
	if(fileFd < 0)
	{
		perror("File opening failed\n");
		return EXIT_FAILURE;

	}
#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return EXIT_SUCCESS;
}
