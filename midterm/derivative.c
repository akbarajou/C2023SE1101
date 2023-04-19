#include <stdio.h>


double f(double x) {
        return x = x*x;
    }

int main() {
    double h = 0.01;
    
    for (float i = 0.2; i <= 1; i += 0.2) {
        //double d = (f(i + h) - f(i)) / h;
        printf("derivative of f(x) at x = %.1f is %.2f\n", i, (f(i + h) - f(i)) / h);
    }
    
    return 0;
}



// Path: derivative.h
