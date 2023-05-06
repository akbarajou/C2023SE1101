// fupt.c  	230502  
#include <stdio.h>

void fun( int *B) 
{
    printf("\nFunc %p  %p  %p  %p  %p \n", B, *B, &B, *(&B), **(&B));
    for (int i=0; i<4; i++)
    {
        printf("%d   %p  \n", B[i], &B[i]);
    }
}

int main()
{
     int A[] = {1,2,3,4};
     printf("Main  %p   %p   %p \n", A, *A, &A);
     for (int i=0; i<4; i++)
     {
        printf("M  %p  %p  %d   %p  \n",  A, *A, A[i], &A[i]);
     }
     fun(A);
     return 0;
}

/*
Main  0061FF0C   00000001   0061FF0C
M  0061FF0C  00000001  1   0061FF0C
M  0061FF0C  00000001  2   0061FF10
M  0061FF0C  00000001  3   0061FF14
M  0061FF0C  00000001  4   0061FF18

Func 0061FF0C  00000001  0061FEE0  0061FF0C  00000001
1   0061FF0C
2   0061FF10
3   0061FF14
4   0061FF18

*/