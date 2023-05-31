// str_array.c  230413  string array

#include <stdio.h>
int main()
{
    int i;
    char na[10]= "abcd";

    printf ("%s %p  %p  \n", na, na, &na);
    printf ("%s %p  \n", na+1, na+1);
   // na=na+1;   error
    return 0;
}

/*
abcd 0061FF16  0061FF16  Same
bcd 0061FF17
*/