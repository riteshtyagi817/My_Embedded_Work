int init();
extern int mainMenu();
extern int (*maMe)();

extern int compression();
extern int (*comp)();

extern int deCompression();
extern int (*dcomp)();

extern int compressionStats();
extern int (*comStats)();

extern int deCompressionStats();
extern int (*deCompStats)();

extern int exitProgram(char *str);
extern int (*extP)(char *str);

extern int openFile(char *mode);
extern int (*openFp)(char *mode);
