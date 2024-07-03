#include "headers.h"
#include "declarations.h"
int main()
{
	int choice = 0;
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
		choice = *(int *)(*funcPtr[0])(NULL);
		switch(choice)
		{
			case 1:
				ret = (int *)(*funcPtr[1])(NULL);
				if(!ret)
					perror("compression function had some issue\n");
				break;
			case 2:
				ret = (int *)(*funcPtr[2])(NULL);
				if(!ret)
					perror("deCompression function had some issue\n");
				break;
			case 3:
				ret = (int *)(*funcPtr[3])(NULL);
				if(!ret)
					perror("compressionStats function had some issue\n");
				break;
			case 4:
				ret = (int *)(*funcPtr[4])(NULL);
				if(!ret)
					perror("deCompressionStats function had some issue\n");
				break;
			case 5:
				ret = (int *)(*funcPtr[5])((void *)"success");
				if(!ret)
					perror("exitProgram function had some issue\n");
				break;
			default:
				printf("Please select the valid option again\n");
				break;



		}
		if(5 == choice)
		{
			printf("Bye-Bye User\n");
			break;

		}

	}
	
#ifdef DEBUG
	printf("%s end\n", __func__);

#endif

	return EXIT_SUCCESS;

}
