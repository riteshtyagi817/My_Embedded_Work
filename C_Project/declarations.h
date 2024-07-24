#ifndef DECLARATIONS_H
#define NOF 10
extern int flag;
extern char *menu[];

int init();


// Commenting the function  pointers to make use of Array of function pointers
extern void * mainMenu(void *arg);
//extern int (*maMe)();

extern void * compression(void *arg);
//extern int (*comp)();

extern void * deCompression(void *arg);
//extern int (*dcomp)();

extern void * compressionStats(void *arg);
//extern int (*comStats)();

extern void * deCompressionStats(void *arg);
//extern int (*deCompStats)();

extern void * exitProgram(void *arg);
//extern int (*extP)(char *str);

extern void * openFile(void *arg);
//extern int (*openFp)(char *mode);

extern void * createMasterArray(void *arg);


extern void * isUnique(void *arg);

// Generic array of function pointers
extern void * (*funcPtr[NOF])(void *);


#endif
