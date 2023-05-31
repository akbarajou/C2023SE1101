/*
    CopyRight: Akbar Tangirov (E30C)
               Ajou University in Tashkent Electrical and Computer Engineering Department
    date: 05/20/2023
    description: Calculate the sum of three integers

    Question: Write a program: In the main, 3 integers x, y, z are declared.
              Send all of these data to a function. In the function,
              calculate a= x+y+z, return a to the main, and
              print it in the main.
*/
#include <stdio.h>

int calc_sum(int *x, int *y, int *z, int *result)
{
    return *result = *x + *y + *z;
}

int main()
{
    int x, y, z, result;
    x = 10;
    y = 20;
    z = 30;

    calc_sum(&x, &y, &z, &result);
    printf("sum: %d\n", result);
}