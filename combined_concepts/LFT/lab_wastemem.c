#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#define MB (1024*1024)

int main(int argc, char *argv[]){


        int j, m;
        char *c;
        if(argc  < 2){

                fprintf(stderr, "You must give the memory in MB to waste, aborting\n");
                exit(EXIT_FAILURE);
        }
        m  = atoi(argv[1]);
        for(j = 0; j < m;j++){

                c = malloc(MB);
                memset(c,j,MB);
                printf("%5d",j);
                fflush(stdout);

        }
        printf("All memory alloated , pausing 5 seconds\n");
        sleep(5);
        printf("Quitting and releasing memory\n");
        exit(EXIT_FAILURE);



}
