// malla2.c  	230502

#include <stdio.h>
#include <stdlib.h>
  
int main()
{
    int* ptr;
    int n, i;
    n=4; 
    ptr = (int*)malloc(n*sizeof(int));
    printf("%p  %p  %p  %p \n", ptr, &ptr, ptr[0], ptr[1]);
  
    if (ptr == NULL)
    {
       printf("Memory not allocated.\n");
       exit(0);
    }
    else
    {
       for (i = 0; i < n; ++i)
            ptr[i] = i + 1;
       for (i = 0; i < n; ++i)
            printf("%p  %p  %p  \n", *ptr, ptr[i], &ptr[i]);
    }

    free(ptr);
    return 0;
}

/*
C:\Users\jungy>a
00C715E8  0061FF14  00C72BA8  00C715B8
00000001  00000001  00C715E8
00000001  00000002  00C715EC
00000001  00000003  00C715F0
00000001  00000004  00C715F4

C:\Users\jungy>a
00B115E8  0061FF14  00B12BA8  00B115B8
00000001  00000001  00B115E8
00000001  00000002  00B115EC
00000001  00000003  00B115F0
00000001  00000004  00B115F4
*/