// str2.c  230225

#include <stdio.h>

int main()
{
    int i;
    char name[]= "abcde";

    printf ("Before  %s \n", name);
    name[2]= '\0';
    printf ("After  %s \n", name);

    for (i=0; i<10; i++)
    {
        printf ("%c  %d \n", name[i], name[i]);
    }
    return 0;
}

/*
Before  abcde
After  ab
a  97
b  98
   0
d  100
e  101
   0
  6
   0
   0
   0
*/