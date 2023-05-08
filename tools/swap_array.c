#include <stdio.h>

#define SIZE 5

void swap(int *x, int *y)
{
    int temp = *x; // store value of *x in temp
    *x = *y; // store value of *y in *x
    *y = temp; // store value of temp in *y
}

int main(void)
{
    int x[SIZE] = {1, 2, 3, 4, 5};
    int y[SIZE] = {5, 4, 3, 2, 1};
    int i;

    // print array before swap
    printf("Before\n");
    printf("x: ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", x[i]);
    }
    printf("\ny: ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", y[i]);
    }
    printf("\n");

    // swap arrays
    for (i = 0; i < SIZE; i++)
    {
        swap(&x[i], &y[i]);
    }

    // print array after swap
    printf("\nAfter swap\n");
    printf("x: ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", x[i]);
    }
    printf("\ny: ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", y[i]);
    }
    printf("\n");
}

