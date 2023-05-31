#include <stdio.h>


float f(float x)
{
    return x * x;
}

int main()
{
    float h = 0.01;
    
    for (float i = 0.2; i <= 1; i += 0.2)
    {
        printf("derivative of f(%.1f) = %.2f\n", i, (f(i + h) - f(i)) / h);
    }
    
    return 0;
}



// Path: derivative.h
