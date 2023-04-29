/*
    CopyRight: Akbar Tangirov (E30C)
    Ajou University in Tashkent Electrical and Computer Engineering Department
    date: 04/14/2023
    description: trial test
*/
#include <stdio.h>
#include <math.h>

float sinx(float x);
void matrix(void);

int main(void)
{
    printf("name: Akbar T(E30C)\n");
    printf("sin(1) = %f\n", sinx(1));
    matrix();
    return 0;
}

float sinx(float x)
{
    return sin(x);
}

void matrix(void)
{
    int i, j;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%d * %d = %d    ", i, j, i*j);
        }
        printf("\n");
    }   
}