// malla.c  	230430

#include <stdio.h>
#include <stdlib.h>
  
int main()
{
    int* ptr;
    ptr= (int*)malloc(4);
   // ptr= int *malloc(4);  Error

    printf("%p \n", ptr);
    if (ptr== NULL)
    {
       printf("Memory not allocated.\n");
       exit(0);
    }
    else
    {
       *ptr= 7;  
       printf("%p  %d  %p  %p  \n", ptr, *ptr, &ptr, *(&ptr));
    }

    free(ptr);
    return 0;
}

/*
C:\Users\jungy>a
00AB15B8
00AB15B8  7  0061FF1C  00AB15B8

C:\Users\jungy>a
007215B8
007215B8  7  0061FF1C  007215B8

*/