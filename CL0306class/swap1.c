// swap1.c   230306  Call by ref

#include<stdio.h>

void swap(int *x, int *y)
{
    int temp= *x;
    *x= *y;
    *y= temp;
}

int main() {
    int i=7;
    int j=9;
    printf("before %d  %d \n",i, j);
    swap(&i, &j);
    printf("after  %d  %d \n",i, j);
}

/*
C:\Users\User\cc2>swap1
before 7  9
after  9  7
*/

