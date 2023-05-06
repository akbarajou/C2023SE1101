#include <stdio.h>
#include <math.h>


int main(void)
{
    double a = 3, b = 4, c = 5; // sides
    double A, B, C; // angles
    double pi = 3.14159265358979323846; // pi

    // find angles
    A = asin(a / c) * 180 / pi;
    B = acos(a / c) * 180 / pi;
    C = 180 - A - B;

    printf("Angle A: %f\n", A);
    printf("Angle B: %f\n", B);
    printf("Angle C: %f\n", C);
}