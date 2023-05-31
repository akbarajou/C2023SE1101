/*
    CopyRight: Akbar Tangirov (E30C)
               Ajou University in Tashkent Electrical and Computer Engineering Department
    date: 05/20/2023
    description: Write a program that swaps the values of two variables using a function.

    Question: Explain what the two programs are doing.
              Explain the results of printf in the main and functions (Func1, Func2)
              Explain the difference between the two programs.
*/
#include <stdio.h>

// First: Call by reference
void swap_one(int *a, int *b)
{
    int temp;
    printf("Func1: %d\n", a);
    temp = *a;
    *a = *b;
    *b = temp;
}

// Second: Call by value
void swap_two(int a, int b)
{
    int temp;
    printf("Func2: %d\n", a);
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int i = 10, j = 20;
    // First: Call by reference
    // swap_one(&i, &j);
    // printf("After swap_one: i = %d, j = %d\n", i, j);

    // Second: Call by value
    swap_two(i, j);
    printf("After swap_two: i = %d, j = %d\n", i, j);
    return 0;
}







/*
    In swap1.c, the function swap takes two pointers as parameters and
    swaps the values stored in the memory locations pointed by them.
    This means that the changes made inside the function are reflected in the main function as well.
    The printf statements inside the function and
    the main function print the memory addresses of the variables and their swapped values respectively.

    In swap2.c, the function swap takes two integers as parameters and swaps their values locally.
    This means that the changes made inside the function are not reflected
    in the main function as the original variables are not modified.
    The printf statements inside the function and the main function print the values
    of the variables before and after calling the function respectively.

    The difference between the two programs is that swap1.c uses call by reference and swap2.c
    uses call by value to pass arguments to the function.
    Call by reference allows the function to modify the original variables,
    while call by value creates copies of the variables that are not affected by the function.
    Therefore, only swap1.c achieves the desired result of swapping i and j.
*/