// strint.c  230413  integer pointer

#include <stdio.h>

int main()
{
    int A= 5;
    int *B;
    B = &A;

    printf ("%x  %d  %p  \n", B, *B, &B); 
    printf ("%x  \n", B+1); 
    return 0;
}

/*
0061FF1C  5  0061FF18  different address
0061FF20
*/