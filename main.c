#include <stdio.h>
#include <stdlib.h>
#include "mm.h"
#include <unistd.h>


typedef struct block {
    size_t size;
    int* status;
    
};




int main(void) {
    printf("My own Memory Allocator \n");
    //char *lengths=mymalloc(10*sizeof(char));
    //myfree(lengths);
    sbrk(1);
    return EXIT_SUCCESS;
}
