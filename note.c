#include <stdio.h>

int main() 
{
    // int A[]= {1,2,3,4};
    // int *pt= A;
    // printf("%d %p  %p  \n", sizeof(A), A, A+1);

    // for (int i = 0; i <4 ; i++) 
    // {
    //     printf("%d  %p  \n", *pt, pt);
    //     pt=pt+1;
    // }

    int my_age = 30;
    int* pt = &my_age;

    printf("%d \n", my_age);
    printf("%p \n", &my_age);
    printf("%p \n", pt);
    
    


    return 0;
}







