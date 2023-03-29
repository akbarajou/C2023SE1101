// funaddr5.c		230314

#include <stdio.h>
void fun( int (*B)[4])   // # of column
{
    printf("1 Func  %p  %p  %p  %p \n", *B, B, *(B+1), B+1);
    printf("2 Func  %d  %d  %d  %d  \n", *(B[0]), *(B[1]), *(B[2]), *(B[3]));  // 159 xx
}

int main()
{
     int A[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
     printf("1 Main %p  %p  \n", A, A+1);  // 16 bytes
     printf("2 Main  %d  %d  %d  \n", A[0][0], A[0][1], A[0][2]);  // 123
     printf("3 Main  %p  %p  %p  \n", *A, *(A+1), *(A+2));  // addr
     printf("4 Main  %p  %p  %p  \n", **A, **(A+1), **(A+2));  // 159
     printf("5 Main  %d  %d  %d  \n", *A[0], *A[1], *A[2]);  // 159
     printf("6 Main  %d  %d  %d  \n", *A[0], *(A[0]+1), *(A[0]+2));  // 123
     printf("7 Main  %d  %d  %d  \n", *(*A+0), *(*A+1), *(*A+2));  // 123

     fun(A);
     return 0;
}

/*
1 Main 0061FEF0  0061FF00
2 Main  1  2  3
3 Main  0061FEF0  0061FF00  0061FF10
4 Main  00000001  00000005  00000009
5 Main  1  5  9
6 Main  1  2  3
7 Main  1  2  3
1 Func  0061FEF0  0061FEF0  0061FF00  0061FF00
2 Func  1  5  9  6422284
*/

