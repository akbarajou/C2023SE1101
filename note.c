#include <stdio.h>

// Print name
void print_name(char *name)
{
    printf("Name: %s\n", name);
}

// Odd number
void odd_numers(int *numbers, int count)
{
    int i = 0;

    for(i = 0; i < count; i++) {
        if(numbers[i] % 2 == 1) {
            printf("%d is odd number\n", numbers[i]);
        }
    }
}

// Calculate fun(x,y)
void func1(int argc, char *argv[])
{
    int x, y;
    for(x = 1; x <= 4; x++) {
        for(y = 1; y <= 4; y++) {
            printf("f(%d, %d) = %d\n", x, y, x*x*y);
        }
    }
}

// Matrix
void func2(void)
{
    int C[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int D[2][3];
    int i, j;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            D[i][j] = C[i][j];
        }
    }

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("D[%d][%d] = %d\n", i, j, D[i][j]);
        }
    }
}

// Find triangle
void func3(void)
{
    int A = 5;
    int *B = &A;

    *B += 3;
    printf("A = %d\n", A);
}

// Derivative of a function
void func4(void)
{
    int i;
    float x, h = 0.01, f, df;

    for(i = 0; i < 5; i++) {
        x = 0.2 + i * 0.2;
        f = x * x;
        df = (f + h - f) / h;
        printf("f(%.1f) = %f\n", x, df);
    }
}




int main(void)
{
    char *name = "Akbar Tangirov";
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    print_name(name);
    odd_numers(numbers, 10);
    func1(0, NULL);
    func2();
    func3();
    func4();

    return 0;
}





