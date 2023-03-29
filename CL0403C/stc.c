// stc.c  		230402

#include <stdio.h>
int main()
{
    char A[]= "banana republic";
    char *pt= A;

    printf ("%p  %s  \n", A, A); 
   // A= A+1;   Error
    printf ("%p  %c  %s  \n", pt, *pt, pt);
    pt=pt+1;
    printf ("%p  %c  %s  \n", pt, *pt, pt);
    return 0;
}

/*
0061FF0C  banana republic
0061FF0C  b  banana republic
0061FF0D  a  anana republic
*/