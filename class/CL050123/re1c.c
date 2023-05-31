// re1c.c		230501

#include <stdio.h>
int main()
{
   int num;
   FILE *fptr;
   char name[]= "wrtest.txt";
   fptr = fopen(name, "r");
  
   for (int i=0; i<3; i++)
   {
   fscanf(fptr, "%d  ", &num);
   printf("%d   \n", num);
   }

   fclose(fptr);
   return 0;
}

/*
10
20
40
*/