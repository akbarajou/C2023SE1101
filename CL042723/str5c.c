// str5c.c  230427

#include <stdio.h>
#include <string.h>

int main()
{
  //  char name[10];
  //  char name[10]= "asdfg";
    char name[]= "asdfg";

  //  name= "abcdef"; // Error
  //  name[]= "abcdef"; // Error
   // name[10]= "abcdef"; // No input

  //  strcpy(name, "qwert");
    printf ("11  %s  %d  \n", name, sizeof(name));

    strcpy(name, "AABBCC");
    printf ("22  %s  \n", name);

    return 0;
}

/*
11  asdfg 10 or 6
22  AABBCC
*/