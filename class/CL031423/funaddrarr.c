// funaddrarr.c  	230314

#include <stdio.h>
void fun( int *B) 
{
    printf("Func   %p \n", B);
    for(int i=0; i<4; i++)
    {
        printf("Func  %d   %p  %p  \n", *B, B, &B);
        *B= *B + 2;
        B= B+1;
    }
}

int main()
{
     int A[] = {1,2,3,4};
     printf("Main1 %p \n", &A); 
     printf("Main2 %p  %p  \n", A, A+1);
     fun(A);
     for(int i=0; i<4; i++)
    {
        printf("After   %d   %p \n", A[i], &A[i]);
     }
     return 0;
}

/*
Main1 0061FF0C
Main2 0061FF0C  0061FF10
Func   0061FF0C
Func  1   0061FF0C  0061FEF0
Func  2   0061FF10  0061FEF0
Func  3   0061FF14  0061FEF0
Func  4   0061FF18  0061FEF0
After   3   0061FF0C
After   4   0061FF10
After   5   0061FF14
After   6   0061FF18
*/