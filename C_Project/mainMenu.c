#include"headers.h"
#include"declarations.h"

void * mainMenu(void *arg)
{
	int *ret = NULL;
	int retVal = 0;
	int *choice = (int *)malloc(1*sizeof(int));
	if(!choice)
	{
		perror("Malloc failed\n");
		return NULL;

	}
#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif
	for(int i = 0; i < 8;i++)
	{
		printf("%s",menu[i]);
	}
	scanf("%d",choice);
	printf("You have entered %d as the choice\n",*choice);
	if(*choice == 5){
		 ret = (int *)(*funcPtr[5])((void *)"success");
                 if(!ret){
                  	perror("exitProgram function had some issue\n");
                        return NULL;
		 }
		 retVal = *ret;
		 return (void *)choice;
	}
	if(*choice >= 1 &&  *choice <= 4)
	{
		ret = (int *)(*funcPtr[*choice])(NULL);
                if(!ret){
                  	perror("Error\n");
                        return NULL;
		 }
		 retVal = *ret;

	}

#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return (void*)choice;
}
