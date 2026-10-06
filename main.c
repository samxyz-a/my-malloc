#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>




typedef struct{
    int status;
    size_t size;
    struct Block* next;
}Block;











int main(){
    //malloc(1);
    printf("Coding my own malloc from scratch in C\n");
    return EXIT_SUCCESS;
}
