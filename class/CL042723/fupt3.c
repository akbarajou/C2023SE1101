// fupt3.c  	230427

#include <stdio.h>
void fun( int *B) 
{
    printf("Func %p  %p \n", B, &B);
    for(int i=0; i<4; i++)
    {
        printf("%d   %p  \n", B[i], &B[i]);
        B[i]= 3*B[i];
    }
}

int main()
{
     int A[] = {1,2,3,4};
     printf("Main %p   %p \n", A, &A);
     fun(A);
    for(int i=0; i<4; i++)
    {
        printf("%d   %p  \n", A[i], &A[i]);
    }
     return 0;
}

/*
Main 0061FF0C   0061FF0C
Func 0061FF0C  0061FEF0
1   0061FF0C
2   0061FF10
3   0061FF14
4   0061FF18
3   0061FF0C
6   0061FF10
9   0061FF14
12   0061FF18
*/