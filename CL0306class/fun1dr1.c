// fun1dr1.c 	230304

#include<stdio.h>
   void disp (int arr[], int size)
   {
        for (int i=0; i<size; i++)  {
             printf("%d  ", arr[i]);
        }
   }

int main()
{
    int vector [5]= {1, 2, 3, 4, 5};
    disp (vector, 5);

   return 0;
}

/*
1  2  3  4  5
*/