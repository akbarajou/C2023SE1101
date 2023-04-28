// fun1dc.c	  230401

#include <stdio.h>
int main() 
{
   int A[4]= {1,2,3,4};
  // A[4]= {5,6,7,8};   Error
   A[1]= 7;  A[2]= 5;
   printf("%d  %d  %d  %d  \n", *A, *(A+1), *(A+2), *(A+3));
   printf("%p  %p  %p  %p", A, A+1, A+2, A+3);
   return 0;
}

/*
1  7  5  4
0061FF10  0061FF14  0061FF18  0061FF1C
*/