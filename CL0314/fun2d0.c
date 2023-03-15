// fun2d0.c	230314

#include <stdio.h>
void disp (int B[2][3])
{
   printf("Func  %p  %d  \n", B, sizeof(B));  // warning
   for (int i = 0; i < 2; i++) 
  {
      for (int j = 0; j < 3; j++) 
      { printf("%d  %p  \n", B[i][j], &B[i][j]);}
   }
}

int main() 
{
   int A[2][3]= {1,2,3,4,5,6};
   printf("%d  \n", sizeof(A));
   printf("%p  %p  %p  \n", A, &A[0][0], &A[0][1]);
   disp(A);
   return 0;
}

/*
24
0061FF08  0061FF08  0061FF0C
Func  0061FF08  4
1  0061FF08
2  0061FF0C
3  0061FF10
4  0061FF14
5  0061FF18
6  0061FF1C
*/