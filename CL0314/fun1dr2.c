// fun1dr2.c    230314

#include<stdio.h>
   void disp (int B[], int size)
   {
        printf("Func  %p  \n", B);
        for (int i=0; i<size; i++){
             printf("%d  ", *(B+i));
        }
        printf("\n");
   }

int main()
{
    int A [5]= {1, 2, 3, 4, 5};
    printf("Main %p  \n", A);
    printf("Main %p  \n", &A);
    printf("Main %p  \n", A[2]);
    disp (A, 5);

    return 0;
}

/*
Main 0061FF0C
Main 0061FF0C
Main 00000003
Func  0061FF0C
1  2  3  4  5
*/