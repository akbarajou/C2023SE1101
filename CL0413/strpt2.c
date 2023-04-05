// strpt2.c  230413  string pointer

#include <stdio.h>
int main()
{
    int i;
    char *na= "abcd ";
    printf ("%s  %p  %p  \n", na, na, &na);

    char *nb= "efgh ";
    printf ("%s  %p  %p  \n", nb, nb, &nb);
    
    return 0;
}

/*
abcd   00405064  0061FF1C  Different
efgh   00405078  0061FF18
*/