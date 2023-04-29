// fun1dr3.c    230304

#include<stdio.h>
   void disp (int *arr, int size)
   {
        printf("%p   \n ", arr);
        for (int i=0; i<size; i++)  {
             printf("%d    %p  \n ", *(arr+i), arr+i);
        }
   }

int main()
{
    int vector [5]= {1, 2, 3, 4, 5};
    disp (vector, 5);

   return 0;
}

/*
0061FF0C
 1    0061FF0C
 2    0061FF10
 3    0061FF14
 4    0061FF18
 5    0061FF1C
*/