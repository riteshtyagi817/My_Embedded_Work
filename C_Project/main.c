#include "headers.h"
#include "declarations.h"
int main()
{
	int *choicePtr = 0;
	int *ret = (int *)malloc(1*sizeof(int));
	if(!ret){
		perror("Malloc failed in main \n");
		exit(EXIT_FAILURE);
	}
#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif
	init();
	while(1)
	{
		choicePtr = (int *)(*funcPtr[0])(NULL);
		if(!choicePtr){
			perror("Some Issue while calling mainMenu function\n");
			return EXIT_FAILURE;
		}
		if(*(int *)choicePtr == 5)
		{
			printf("bye-bye\n");
			break;

		}

	}
	
#ifdef DEBUG
	printf("%s end\n", __func__);

#endif

	return EXIT_SUCCESS;

}
