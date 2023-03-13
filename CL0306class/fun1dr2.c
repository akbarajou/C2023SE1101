// fun1dr2.c    230304

#include<stdio.h>
   void disp (int arr[], int size)
   {
        printf("Func  %p  \n", arr);
        for (int i=0; i<size; i++){
             printf("%d  ", *(arr+i));
        }
   }

int main()
{
    int vector [5]= {1, 2, 3, 4, 5};
    printf("Main %p  \n", vector);
    printf("Main %p  \n", &vector);
    printf("Main %p  \n", vector[2]);
    disp (vector, 5);

   return 0;
}

/*
Main 0061FF0C
Main 0061FF0C
Main 00000003
Func  0061FF0C
1  2  3  4  5
*/