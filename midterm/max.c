#include <stdio.h>

int max(int *x, int *y, int *z)
{
    int max = *x;
    if (*y > max)
        max = *y;
    if (*z > max)
        max = *z;
    return max;
}

int main(void) {
    int x, y, z;
    x = 1;
    y = 2;
    z = 3;

    printf("max is %d\n", max(&x, &y, &z));

    return 0;
}
