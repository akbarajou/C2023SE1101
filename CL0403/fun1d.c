// fun1d.c	  230402

#include <stdio.h>
int main() 
{
   int A[]= {1,2,3,4};
   int *pt= A;
   printf("%d %p  %p  \n", sizeof(A), A, A+1);

   for (int i = 0; i <4 ; i++) 
  {
      printf("%d  %p  \n", *pt, pt);
      pt=pt+1;
   }
   return 0;
}

/*
16  0061FF08  0061FF0C
1  0061FF08
2  0061FF0C
3  0061FF10
4  0061FF14
*/