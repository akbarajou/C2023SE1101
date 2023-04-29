// strc4.c		230427

#include <stdio.h>
typedef struct  {
    float x;
    float y;
}  AA;

void fun(AA A)  {
    printf("Func  %f  %f  \n", A.x, A.y);
    printf("Func  %p  \n", &A);
    printf("Func ***  %p  \n", A);  //
    printf("Func  %p  %p  %p \n", &A, &A.x, &A.y);
}

int main()  {
    AA A1;
    A1.x= 3.0;
    A1.y= 4.0;
    float dist= A1.x*A1.x + A1.y*A1.y;
    printf("Distance   %f \n", dist);
    fun(A1);

    AA A2;
    A2.x=5.0;
    A2.y=6.0;
    printf("Main  %p  %p  %p \n", &A1, &A2, &dist);
    fun(A2);
    return 0;
}

/*
Distance   25.000000
Func  3.000000  4.000000
Func  0061FEF0
Func ***  40400000
Func  0061FEF0  0061FEF0  0061FEF4
Main  0061FF18  0061FF0C  0061FF14
Func  5.000000  6.000000
Func  0061FEF0
Func ***  40A00000
Func  0061FEF0  0061FEF0  0061FEF4
*/