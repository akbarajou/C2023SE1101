// stc2.c  	230402

#include <stdio.h>
int main()
{
    char *A= "banana republic";
    printf ("%p  %s  %d  \n", A, A, sizeof(A)); 
    printf ("%d  %c  %d  %c  \n", A[0], A[0], A[1], A[1]); 
    A= A+1;
    printf ("%p  %s  \n", A, A);
    return 0;
}

/*
00405064  banana republic  4
98  b  97  a
00405065  anana republic
*/