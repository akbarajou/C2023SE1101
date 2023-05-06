// strc4pt.c	230417  Pointer

#include <stdio.h>
typedef struct  {
    float x;
    float y;
}  AA;

void prt(AA *A)  {
    printf("Func  %f  %f  \n", A->x, A->y);
    printf("Func  %p  %p  %f  \n", A, &A, *A);
    printf("Func  %p  %p  %p \n", &A, &A->x, &A->y);
}

int main()  {
    AA A1;
    A1.x= 3.0;
    A1.y= 4.0;
    printf("%f  %f  \n", A1.x, A1.y);
    float dist= A1.x*A1.x + A1.y*A1.y;
    printf("Distance   %f \n", dist);
    prt(&A1);
    AA A2;
    A2.x=5.0;
    A2.y=6.0;
    printf("%f  %f   \n", A2.x, A2.y);
    printf("Main  %p  %p  %p \n", &A1, &A2, &dist);
    prt(&A2);
    return 0;
}

/*
3.000000  4.000000
Distance   25.000000
Func  3.000000  4.000000
Func  0061FF18  0061FEE0  512.000123
Func  0061FEE0  0061FF18  0061FF1C
Func  5.000000  6.000000
Func  0061FF0C  0061FEE0  8192.001972
Func  0061FEE0  0061FF0C  0061FF10
*/