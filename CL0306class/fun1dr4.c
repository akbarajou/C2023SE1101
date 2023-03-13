// fun1dr4.c 	230305

#include<stdio.h>
   void disp (int *arr, int size)
   {
        for (int i=0; i<size; i++)  {
             printf("%d  %d  ", arr,  arr+1);
             printf("%d  \n", arr[i]);
        }
   }

int main()
{
    int vector [5]= {1, 2, 3, 4, 5};
    disp (vector, 5);

   return 0;
}

/*
6422284  6422288  1
6422284  6422288  2
6422284  6422288  3
6422284  6422288  4
6422284  6422288  5
*/