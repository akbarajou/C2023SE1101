/*  
    CopyRight: Tangirov Akbar 
    Ajou University in Tashkent Electrical and Computer Engineering Department
    Date: 01.03.2023
    Description: lab task
*/
#include <stdio.h>
#include <math.h>

// print name fun
void print_name()
{
    printf("name: Akbar Tangirov(E30C)\n");
}

// calculate sin^2(x) + cos^2(x)
void sin_cos()
{
    double result;
    for (double x = 0; x <= 2; x += 0.5)
    {
        result = sin(x)*sin(x) + cos(x)*cos(x);
        printf("sin^2(%.1f) + cos^2(%.1f) = %.2f\n", x,x, result);
    }
}

// calculate AxB vector 
void vector()
{
    int A[3] = {4, 5, 6}; // A vector
    int B[3] = {6, 7, 8}; // B vector
    int result = 0; // for save result of AxB
    for (int i = 0; i < 3; i++)
    {
        printf("A[%d], B[%d]\n", A[i], B[i]);
        result += A[i] * B[i];
    }
    printf("AxB = %d\n", result);
}

// calculate triangle angle
void triangle()
{
    double a = 3, b = 4, c = 5; // sides
    double A, B, C; // angles
    double pi = 3.14159265358979323846; // pi
    
    A = acos((b*b + c*c - a*a) / (2 * b * c)) * 180 / pi;
    B = acos((a*a + c*c - b*b) / (2 * a * c)) * 180 / pi;
    C = acos((a*a + b*b - c*c) / (2 * a * b)) * 180 / pi;
    printf("Angle A: %.0f\n", A);
    printf("Angle B: %.0f\n", B);
    printf("Angle C: %.0f\n", C);

    // easy way
    A = asin(a / c) * 180 / pi;
    B = acos(b / c) * 180 / pi;
    C = 180 - A - B;
    printf("Angle A: %.0f\n", A);
    printf("Angle B: %.0f\n", B);
    printf("Angle C: %.0f\n", C);
    
}

// main fun
int main()
{
    print_name();
    sin_cos();
    vector();
    triangle();
    return 0;
}


// Wednesday 11:30 Mar 01 2023
