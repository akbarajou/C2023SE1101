#include <stdio.h>
#include <math.h>

// print name fun
void print_name()
{
    printf("Name: Akbar Tangir\n");
}

// calculate sin^2(x) + cos^2(x)
void calculate()
{
    double x;
    double result;
    for (x = 0; x <= 2; x += 0.5)
    {
        result = sin(x) * sin(x) + cos(x) * cos(x);
        printf("sin(%.1f)sin(%.1f) + cos(%.1f)cos(%.1f) = %lf\n", x,x,x,x, result);
    }
}

// calculate AxB vector 
void vector()
{
    int A[3] = {4, 5, 6};
    int B[3] = {6, 7, 8};
    int i;
    int result = 0;
    for (i = 0; i < 3; i++)
    {
        printf("A[%d], B[%d]\n", A[i], B[i]);
        result += A[i] * B[i];
    }
    printf("AxB = %d\n", result);
}

// calculate triangle angle
void triangle()
{
    // using variable
    double a = 3;
    double b = 4;
    double c = 5;
    double angleA;
    double angleB;
    double angleC;
    angleA = acos((b*b + c*c - a*a) / (2 * b * c)) * 180 / 3.14;
    angleB = acos((a*a + c*c - b*b) / (2 * a * c)) * 180 / 3.14;
    angleC = acos((a*a + b*b - c*c) / (2 * a * b)) * 180 / 3.14;
    printf("angleA = %.0f\nangleB = %.0f\nangleC = %.0f\n", angleA, angleB, angleC);

}

// main fun
int main()
{
    print_name();
    calculate();
    vector();
    triangle();
    return 0;
}


// Wednesday 11:30 Mar 01 2023
