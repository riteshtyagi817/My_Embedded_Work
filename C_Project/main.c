#include "headers.h"
#include "declarations.h"
int main()
{
	int choice = 0;
	int ret = 0;
#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif
	while(1)
	{
		choice = mainMenu();
		switch(choice)
		{
			case 1:
				ret = compression();
				if(ret != 0)
					perror("compression function had some issue\n");
				break;
			case 2:
				ret = deCompression();
				if(ret != 0)
					perror("deCompression function had some issue\n");
				break;
			case 3:
				ret = compressionStats();
				if(ret != 0)
					perror("compressionStats function had some issue\n");
				break;
			case 4:
				ret = deCompressionStats();
				if(ret != 0)
					perror("deCompressionStats function had some issue\n");
				break;
			case 5:
				ret = exitProgram("success");
				if(ret != 0)
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
