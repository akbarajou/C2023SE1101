// str3.c  230331

#include <stdio.h>
int main()
{
    char name[]= "abcdef";
    printf ("111  %s  %d  \n", name, sizeof(name));
    printf ("222 \n", name);  //  No print!
    printf (name);  //  OK
    return 0;
}

/*
111  abcdef  7
222
abcdef
*/