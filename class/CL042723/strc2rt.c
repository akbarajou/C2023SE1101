// strc2rt.c	230418

#include <stdio.h>
typedef struct
{
    float x;
    float y;
} AA;

AA center (AA a, AA b)
{
    float c, d;
    c=(a.x+b.x)/2.0;
    d=(a.y+b.y)/2.0;
    AA res= {c, d};
    return res;
}

int main() 
{
    AA result, A1, A2;
    A1.x=9;  A1.y=2.;
    A2.x=1;  A2.y=9.;

    result= center(A1, A2);
    printf("%f   %f\n", result.x, result);
    return 0;
}

/*
2.000000   3.000000
*/

