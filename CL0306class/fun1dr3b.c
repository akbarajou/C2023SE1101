// fun1dr3b.c  	230305

#include <stdio.h>

void disp (int *arr, int size)
{
    printf("Func  %d  \n", sizeof(arr));

    for (int i=0; i<size; i++)
    {    printf("Func 1:  %d  ", arr[i]);  }
    printf("\n");  

    for (int i=0; i<size; i++)
    {    printf("Func 2:  %d  ", *(arr+i));  }
    printf("\n");  

   for (int i=0; i<size; i++)
    {    printf("Func 3:  %d  %p  \n", *arr, arr);  
         arr=arr+1;     } 
}

int main()
{
    int A[5]= {1, 2, 3, 4, 5};
    printf("Main  %d  \n", sizeof(A));    // 20

    disp(A, 5);
    return 0;
}

/*
Main  20
Func  4
Func 1:  1  Func 1:  2  Func 1:  3  Func 1:  4  Func 1:  5
Func 2:  1  Func 2:  2  Func 2:  3  Func 2:  4  Func 2:  5
Func 3:  1  0061FF0C
Func 3:  2  0061FF10
Func 3:  3  0061FF14
Func 3:  4  0061FF18
Func 3:  5  0061FF1C
*/