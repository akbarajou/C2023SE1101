// strpt.c  230413  string pointer

#include <stdio.h>
int main()
{
    int i;
    char *na= "abcd ";
    printf ("%s  %p  %p  \n", na, na, &na);
    
    for (i=0; i<7; i++)
    {
        printf ("%c  %d \n", *(na+i), na[i]);
    }

    na=na+1;
    printf ("%s  %p  %p  \n", na, na, &na);
    return 0;
}

/*
abcd   00405064  0061FF18  Different
a  97
b  98
c  99
d  100
   32
   0
% 37
bcd   00405065  0061FF18
*/