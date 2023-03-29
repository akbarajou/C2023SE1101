// str6.c  	230402

#include <stdio.h>
int main()
{
    int i;
    char A[10]= "ice cake";
    for (i=0; i<9; i++)
    {
        printf ("%c ", A[i]);
    }
    printf ("\n");

    for (i=0; i<9; i++)
    {
        printf ("%d ", A[i]);
    }
    return 0;
}

/*
i c e   c a k e
105 99 101 32 99 97 107 101 0

Ascii code null= 0, i=105, c=99, e=101
   	 space=32, 0=48, 1=49
*/