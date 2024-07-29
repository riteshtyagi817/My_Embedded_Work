#include "headers.h"
#ifndef NOF
#define NOF 10
#endif
// commenting the function pointer to make use of array of function pointers
void * mainMenu(void *arg);
//int (*maMe)();

void * compression(void *arg);
//int (*comp)();

void * deCompression(void *arg);
//int (*dcomp)();

void * compressionStats(void *arg);
//int (*comStats)();

void * deCompressionStats(void *arg);
//int (*deCompStats)();

void * exitProgram(void *arg);
//int (*extP)(char *str);

void * openFile(void *arg);
//int (*openFp)(char *mode);

void  *createMasterArray(void *arg);

void * (*funcPtr[NOF])(void *);

void * isUnique(void *);

void * cMaxBits(void *);

void *compression2(void *);

void *compression3(void *);

void *compression4(void *);

void *compression5(void *);

void *compression6(void *);

void *compression7(void *);

void *compression8(void *);
int flag  = 0;

 char *menu[] = {
          "____________________MENU___________________________\n",
          "Please select the choice from the given Menu Items\n",
          "Choice 1 --> Compression\n",
          "Choice 2 --> DeCompression\n",
          "Choice 3 --> CompressionStats\n",
          "Choice 4 --> DeCompressionStats\n",
          "Choice 5 --> Exit the Program\n",
          "Any Other value --> Invalid option\n"
  };
int init()
{
	
#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif
	// Initializaton of function pointers
	funcPtr[0] = mainMenu;
	funcPtr[1] = compression;
	funcPtr[2] = deCompression;
	funcPtr[3] = compressionStats;
	funcPtr[4] = deCompressionStats;
	funcPtr[5] = exitProgram;
	funcPtr[6] = openFile;
	funcPtr[7] = createMasterArray;
	funcPtr[8] = isUnique;
	funcPtr[9] = cMaxBits;
	funcPtr[10] = compression2;
	funcPtr[11] = compression3;
	funcPtr[12] = compression4;
	funcPtr[13] = compression5;
	funcPtr[14] = compression6;
	funcPtr[15] = compression7;
	funcPtr[16] = compression8;

#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return EXIT_SUCCESS;
}
