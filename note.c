#include <stdio.h>
#include <math.h>

int main(void)
{
    double a = 3, b = 4, c = 5; // sides
    double A, B, C; // angles
    double pi = 3.14159265358979323846; // pi
    
    A = acos((b*b + c*c - a*a) / (2 * b * c)) * 180 / pi;
    B = acos((a*a + c*c - b*b) / (2 * a * c)) * 180 / pi;
    C = acos((a*a + b*b - c*c) / (2 * a * b)) * 180 / pi;
    printf("Angle A: %.2f\n", A);
    printf("Angle B: %.2f\n", B);
    printf("Angle C: %.2f\n", C);

    // easy way
    A = asin(a / c) * 180 / pi;
    B = asin(b / c) * 180 / pi;
    C = 180 - A - B;
    printf("Angle A: %f\n", A);
    printf("Angle B: %f\n", B);
    printf("Angle C: %f\n", C);
}