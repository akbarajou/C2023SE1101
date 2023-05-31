// str7.c  	230402

#include <stdio.h>
#include <string.h>

void fun(char *pt)
{
    printf ("Func  %p  %s  \n", pt, pt); 
    printf ("Func sizeof  %d \n", sizeof(pt)); 
    printf ("Func strlen  %d \n", strlen(pt));
}

int main()
{
    char A[]= "banana republic";
    printf ("Main  %p  %p \n", A, &A); 
    printf ("Main sizeof  %d \n", sizeof(A)); 
    printf ("Main strlen  %d \n", strlen(A));
    fun(A);
    return 0;
}

/*
Main  0061FF10  0061FF10
Main sizeof  16
Main strlen  15
Func  0061FF10  banana republic
Func sizeof  4
Func strlen  15
*/