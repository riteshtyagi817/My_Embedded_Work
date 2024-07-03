#include"headers.h"
#include"declarations.h"
void * exitProgram(void *arg)
{
	int *status = (int *)malloc(1*sizeof(int));
	if(!status){
		perror("Malloc failed in exitProgram\n");
		return NULL;
	}
	*status = EXIT_SUCCESS;
	char *str = NULL;
#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif
	str = (char *)arg;
	if(0 == strncmp(str, "success",7)){
		return (void *)status;
	}
	else{
		*status = EXIT_FAILURE;
		return (void *)status;
	}
#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return (void *)status;

}
