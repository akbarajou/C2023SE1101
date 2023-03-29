// str4.c  230331

#include <stdio.h>
int main()
{
    char *name;
    name= "abcdef";
    printf ("111  %s  %d  \n", name, sizeof(name));
    printf ("222 \n", name);  //  No print!
    printf(name);  // OK
    return 0;
}

/*
111  abcdef  4
222
abcdef
*/