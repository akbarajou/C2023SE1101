// strarr.c  230413  integer array

#include <stdio.h>
int main()
{
    int i;
    int A[]= {1, 2, 3, 4};

    printf ("%p  %d  %p  \n", A, *A, &A);
    printf ("%p  %d  \n", A+1, *(A+1));
    return 0;
}

/*
0061FF10  1  0061FF10  same address
0061FF14  2
*/