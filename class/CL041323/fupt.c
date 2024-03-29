// fupt.c  230413  function pointer

#include <stdio.h>
void fun( int *B) 
{
    printf("Func %p  %p \n", B, &B);
    for(int i=0; i<4; i++)
    {
        printf("%d   %p  \n", B[i], &B[i]);
    }
}

int main()
{
     int A[] = {1,2,3,4};
     printf("Main %p   %p \n", A, &A);
     for(int i=0; i<4; i++)
    {
        printf("Main   %d   %p  \n",  A[i], &A[i]);
     }
     fun(A);
     return 0;
}

/*
Main 0061FF0C   0061FF0C
Main   1   0061FF0C
Main   2   0061FF10
Main   3   0061FF14
Main   4   0061FF18
Func 0061FF0C  0061FEF0  Different
1   0061FF0C
2   0061FF10
3   0061FF14
4   0061FF18
*/