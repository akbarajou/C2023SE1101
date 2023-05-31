// str1.c  230225

#include <stdio.h>

int main()
{
    int i;
    char name[]= "abcd";

    printf ("%s \n", name);
    for (i=0; i<10; i++)
    {
        printf ("%c  %d \n", name[i], name[i]);
    }
    printf ("%s ", name);
    return 0;
}

/*
abcd
a  97
b  98
c  99
d  100
   0
  5
abcd
*/

/*
C:\Users\jungy>a
abcde
a  97
b  98
c  99
d  100
e  101
   0
  6
abcde
*/