#include"headers.h"
#include"declarations.h"

void * mainMenu(void *arg)
{
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

#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return (void*)choice;
}
