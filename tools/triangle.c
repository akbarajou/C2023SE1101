#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846 // macro for pi value

// find and print the angles of a triangle given its sides
void triangle(double a, double b, double c)
{
    double angles[3]; // angles
    char names[3] = {'A', 'B', 'C'}; // names of angles
    
    // using cosine rule to find angles
    angles[0] = acos((pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b * c)) * 180 / PI;
    angles[1] = acos((pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * a * c)) * 180 / PI;
    angles[2] = acos((pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b)) * 180 / PI;
    
    // using a loop to print angles
    for (int i = 0; i < 3; i++)
    {
        printf("Angle %c: %.2f\n", names[i], angles[i]);
    }
}

// main function
int main()
{
    // example 1: a right triangle with sides 3, 4, and 5
    printf("Example 1:\n");
    triangle(3, 4, 5);
    
    // example 2: an obtuse triangle with sides 5, 6, and 8
    printf("Example 2:\n");
    triangle(5, 6, 8);
    
    // example 3: an acute triangle with sides 4, 5, and 6
    printf("Example 3:\n");
    triangle(4, 5, 6);
    
    return 0;
}




// int main(void)
// {
//     double a = 3, b = 4, c = 5; // sides
//     double A, B, C; // angles
//     double pi = 3.14159265358979323846; // pi

//     // find angles
//     A = asin(a / c) * 180 / pi;
//     B = acos(a / c) * 180 / pi;
//     C = 180 - A - B;

//     printf("Angle A: %f\n", A);
//     printf("Angle B: %f\n", B);
//     printf("Angle C: %f\n", C);
// }