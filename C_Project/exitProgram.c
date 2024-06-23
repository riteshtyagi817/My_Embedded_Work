#include"headers.h"
#include"declarations.h"
int exitProgram(char *str)
{
#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif
	if(0 == strncmp(str, "success",7))
		return EXIT_SUCCESS;
	else return EXIT_FAILURE;

#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return EXIT_SUCCESS;
}
