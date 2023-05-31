#include <stdio.h>

#define SIZE 5 // macro for the size of the multiplication table

void name(void)
{
    printf("name: Akbar (E30C)\n"); // single printf statement
}

void func_multiply(void)
{
    int i, j;
    for (i = 1; i <= SIZE; i++) // using SIZE macro
    {
        for (j = 1; j <= SIZE; j++) // using SIZE macro
            printf("%d * %d = %d    \n", i,j, i*j);
        printf("\n");
    }
}

float func_return_result(float *x)
{
    return *x *= 4.0; // using compound assignment operator
}

int func_increasing_value(int *B)
{
    return *B += 10; // using increment operator
}

int main(void)
{
    int A = 5;
    int *B = &A;
    float x = 4;

    name();
    func_multiply();
    func_return_result(&x);
    func_increasing_value(B);

    printf("Address of A: %p \nAddress of B: %p\n", &A, B); // using %p format specifier
    printf("Value of A: %d\n\n", A);
    printf("Value of x: %.2f\n", x);
}
