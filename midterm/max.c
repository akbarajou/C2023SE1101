#include <stdio.h>


// short version
void max(int x, int y, int z)
{
    int max = x;
    if (y > max)
        max = y;
    if (z > max)
        max = z;
    printf("max is %d\n", max);
}

// long version
void fun(int x, int y, int z) {
    if (x > y && x > z) {
        printf("max is %d\n", x);
    }
    if (y > x && y > z) {
        printf("max is %d\n", y);
    }
    if (z > y && z > x) {
        printf("max is %d\n", z);
    }
}

int main(void) {
    int x, y, z;
    x = 1;
    y = 2;
    z = 3;
    fun(x, y, z);
    max(x, y, z);

    return 0;
}
