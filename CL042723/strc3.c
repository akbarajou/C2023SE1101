// strc3.c  		230417

#include <stdio.h>

typedef struct    	//  define before main
{
    float x;
    float y;
    float z;
}  AA;

int main()
{
    AA A1;
    A1.x= 3.0;
    A1.y= 4.0;
    A1.z= 3.0;
    printf("%f  %f  %f  \n", A1.x, A1.y, A1.z);
    float distance= A1.x*A1.x + A1.y*A1.y+A1.z*A1.z;
    printf("Distance   %f \n", distance);

    AA A2;
    A2.x=1.0;
    A2.y=2.0;
    A2.z=1.0;
    printf("%f  %f %f  \n", A2.x, A2.y, A2.z);
    printf("%p  %p   %p \n", &A1, &A1.y, &A2);
    return 0;
}

/*
3.000000  4.000000  3.000000
Distance   34.000000
1.000000  2.000000 1.000000
0061FF10  0061FF14   0061FF04
*/