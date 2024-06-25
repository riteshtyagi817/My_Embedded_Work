#include "headers.h"
int mainMenu();
int (*maMe)();

int compression();
int (*comp)();

int deCompression();
int (*dcomp)();

int compressionStats();
int (*comStats)();

int deCompressionStats();
int (*deCompStats)();

int exitProgram(char *str);
int (*extP)(char *str);

int openFile(char *mode);
int (*openFp)(char *mode);

int init()
{
	
#ifdef DEBUG
	printf("%s begin\n", __func__);
#endif
	// Initializaton of function pointers
	maMe = mainMenu;
	comp = compression;
	dcomp = deCompression;
	comStats = compressionStats;
	deCompStats = deCompressionStats;
	extP = exitProgram;
	openFp = openFile;

#ifdef DEBUG
	printf("%s end\n", __func__);
#endif
	return EXIT_SUCCESS;
}
