// strc2.c  		230417

#include <stdio.h>

int main()
{

typedef struct  // Inside of main
{
    float x;
    float y;
}  AA;

    AA A1;
    A1.x= 3.0;
    A1.y= 4.0;

    printf("%f   %f  \n", A1.x, A1.y);
    float distance= A1.x*A1.x + A1.y*A1.y;
    printf("A1   %f \n", distance);

    AA A2;
    A2.x=1.0;
    A2.y=2.0;

    printf("%f   %f  \n", A2.x, A2.y);
    distance= A2.x*A2.x + A2.y*A2.y;
    printf("A2   %f \n", distance);
    printf("%p  %p  %p  \n", &A1, &A1.x, &A2);
    return 0;
}

/*
3.000000   4.000000
A1   25.000000
1.000000   2.000000
A2   5.000000
0061FF14  0061FF14  0061FF0C
*/