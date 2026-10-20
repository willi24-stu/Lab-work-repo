#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]){

        if(argc == 4){
                printf("Hello ");
                printf("%s", argv[1]);
                printf(" ");
                printf("%s", argv[2]);
                printf("! may I call you ");
                printf("%s", argv[3]);
                printf(".\n");
        }

        return EXIT_SUCCESS;
}
