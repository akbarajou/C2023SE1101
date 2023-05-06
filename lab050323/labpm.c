#include <stdio.h>

void name(void)
{
    printf("name: Akbar (E30C)\n\n");
}

int func(int *x)
{
    return *x * 3;
}

int main(void)
{
    int i, x = 3, A = 3, sum = 0;
    int *pt = &A;
    *pt = A + 5;

    name();
    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i);
        sum += i;
    }
    printf("   sum: %d\n\n", sum);
    printf("3 * 3 = %d\n\n", func(&x));
    printf("address of A: %p\n", pt);
    printf("value of A: %d\n", *pt);
}