/*
    CopyRight: Akbar Tangirov (E30C)
    Ajou University in Tashkent Electrical and Computer Engineering Department
    Date: 19/04/2023
    Description: lab test
*/
#include <stdio.h>
#include <math.h>

// sinx() is a function that returns sin(x)
float sinx(float x)
{
    return sin(x);
}

// array_sum() is a function that prints the sum of the elements of an array
void array_sum(int *A)
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += A[i];
    }
    printf("array sum: %d\n\n", sum);
}

// main function
int main(void)
{
    int sum = 0, A[] = {1, 2, 3};

    // print name
    printf("\nname: Akbar (E30C)\n\n");

    // print sin(1) by calling sinx()
    printf("sin(1) = %.1f\n\n", sinx(1));

    // print even number from 1 to 21 and sum them by using for loop
    for (int i = 2; i < 21; i += 2)
    {
        sum += i;
        printf("%d ", i);
    }
    printf("    sum: %d\n\n", sum);

    // print array sum by calling array_sum()
    array_sum(A);

    return 0;
}