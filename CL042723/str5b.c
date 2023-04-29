// str5b.c  230427

#include <stdio.h>
#include <string.h>

int main()
{
    char *name;
    name= "abcdef";
    printf ("11  %s  %d  \n", name, sizeof(name));

    name= "AABBCC";
    printf ("22  %s  \n", name);

    strcpy(name, "qwert");  // No input
    printf ("33  %s  \n", name);
    return 0;
}

/*
11  abcdef  4
22  AABBCC
*/