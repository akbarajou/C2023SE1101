#include <stdio.h>

void foo1(int xval)
{
    int x;
    x = xval;
    printf("foo1: x address is %p \n", &x);
    printf("foo1: x value is %d \n\n", x);
}

void foo2(int yval)
{
    int y;
    printf("foo2: y address is %p \n", &y);
    printf("foo2: y value is %d \n", y);
}

int main()
{
    foo1(7);
    foo2(11);
    return 0;
}


/*
    foo1: x address is 0x7fffd2612794
    foo1: x value is 7

    foo2: y address is 0x7fffd2612794 
    foo2: y value is 7
*/