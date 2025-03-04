    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <sys/syscall.h>
    #include<string.h>

    time_t (*f)(time_t *tloc) = 0xffffffffff600400; 

    int main(int argc, char **argv)
    {
        unsigned long i = 0;
        if(!strcmp(argv[1], "1")) {
            for (i = 0; i < 1000000;++i)
            f(NULL);
        } else if (!strcmp(argv[1], "2")) { 
            for (i = 0; i < 1000000;++i)
            time(NULL);
        } else {
            for (i = 0; i < 1000000; ++i) 
            syscall(SYS_time, NULL);
        }
        return 0;

    }
