// funaddr3hh.c		230314

#include <stdio.h>
void fun( int (*B)[4])   // [# of column]
{
    printf("1  bytes %d \n", sizeof(B));  // 4 bytes
    printf("2  %p  %p \n", *B, B);  // same
    printf("3  %p  %p  %p \n", B[0], B[1], B[2]);
    printf("4  %p  %p  %p \n", B[0]+1, B[0]+2, B[0]+3);
    printf("5  %d  %d  %d  %d  \n", *(B[0]), *(B[1]), *(B[2]), *(B[3]));
    printf("6  %d  %d  %d  %d   %d \n", *(B[0]), *(B[0]+1),*(B[0]+2), *(B[0]+3));
    printf("7  %d  %d  %d  %d   %d \n", *(B[1]), *(B[1]+1),*(B[1]+2), *(B[1]+3));
}

int main()
{
     int A[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
     fun(A);
     return 0;
}

/*
1  bytes 4
2  0061FEF0  0061FEF0
3  0061FEF0  0061FF00  0061FF10
4  0061FEF4  0061FEF8  0061FEFC
5  1  5  9  6422284
6  1  2  3  4   8
7  5  6  7  8   8
*/