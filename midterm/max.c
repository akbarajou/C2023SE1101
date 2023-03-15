#include <stdio.h>

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

    return 0;
}
