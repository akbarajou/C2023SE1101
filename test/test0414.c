/*
    CopyRight: Akbar Tangirov (E30C)
    Ajou University in Tashkent Electrical and Computer Engineering Department
    date: 04/14/2023
    description: trial test
*/
#include <stdio.h>
#include <math.h>

float func1(float x);
void func2(void);

int main(void)
{
    printf("name: Akbar T(E30C)\n");
    printf("sin(1) = %f\n", func1(1));
    func2();
    return 0;
}

float func1(float x)
{
    return sin(x);
}

void func2(void)
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