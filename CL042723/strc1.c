// strc1.c 		230417

#include <stdio.h>

struct AA
{
    float a;
    float b;
}   A1, A2, A3;		//declare variables

int main()
{
    float sum;
    printf("%p  %p  %p \n", &A1, &A2, &A3);

    A1.a=1.0;
    A1.b=1.0;
    printf("A1 a, b  %f  %f         %p  %p\n", A1.a, A1.b, &A1.a, &A1.b);
    A2.a=5.0;
    A2.b=5.0;
    printf("A2 a, b  %f  %f         %p  %p\n", A2.a, A2.b, &A2.a, &A2.b);

    sum= (A2.a-A1.a)*(A2.a-A1.a) + (A2.b-A1.b)*(A2.b-A1.b);
    printf("%f      %p\n", sum, &sum);
    return 0;
}
   
/*
00407070  00407078  00407080
A1 a, b  1.000000  1.000000
A2 a, b  5.000000  5.000000
32.000000
*/