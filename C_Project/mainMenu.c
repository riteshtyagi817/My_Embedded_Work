#include"headers.h"
#include"declarations.h"
int mainMenu()
{
	int choice = 0;
#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif
	printf("____________________MENU___________________________\n");
	printf("Please select the choice from the given Menu Items\n");
	printf("Choice 1 --> Compression\n");
	printf("Choice 2 --> DeCompression\n");
	printf("Choice 3 --> CompressionStats\n");
	printf("Choice 4 --> DeCompressionStats\n");
	printf("Choice 5 --> Exit the Program\n");
	printf("Any Other value --> Invalid option\n");
	scanf("%d",&choice);
	printf("You have entered %d as the choice\n",choice);

#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return choice;
}
