// str5cw.c  	230427

#include <stdio.h>
#include <string.h>

int main()
{
    char name[10];
  //  name= "abcdef"; // Error
  //  name[]= "abcdef"; // Error
    name[10]= "abcdef"; // No input

  //  strcpy(name, "qwert");
    printf ("11  %s  %d  \n", name, sizeof(name));

 //  name= "AABBCC";  Error
    strcpy(name, "AABBCC");
    printf ("22  %s  \n", name);

    return 0;
}

/*
11    10
22  AABBCC
*/