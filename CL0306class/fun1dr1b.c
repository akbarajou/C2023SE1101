// fun1dr1b.c  	230305

#include<stdio.h>
   void disp (int arr[], int size)
   {
        printf("Func  %d %d \n", arr, size);
        for (int i=0; i<size; i++)  {
             printf("Func  %d  \n", arr[i]);
        }
   }

int main()
{
    int vector [5]= {1, 2, 3, 4, 5};
    printf("Main  %d  \n", sizeof(vector));
    disp (vector, sizeof(vector)/sizeof(int));

   return 0;
}

/*
Main  20
Func  6422284 5
Func  1
Func  2
Func  3
Func  4
Func  5
*/