#include <stdio.h>
#include <math.h>



double findVectorLength(double x, double y, double z)
{
    double length = sqrt(x*x + y*y + z*z);
    return length;
}


int main(void)
{
    double x = 1.0;
    double y = 2.0;
    double z = 3.0;
    double length = findVectorLength(x, y, z);

    printf("The length of the vector is %f\n", length);
    printf("My name is Akbar\n");
    return 0;
}


