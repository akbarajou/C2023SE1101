#include <stdio.h>


double f(double x) {
        return x = x*x;
    }

int main() {
    double x_values[] = {0.2, 0.4, 0.6, 0.8, 1.0};
    double h = 0.01;
    
    for (int i = 0; i < 5; i++) {
        double x = x_values[i];
        double d = (f(x + h) - f(x)) / h;
        printf("derivative of f(x) at x = %.1f is %f\n", x, d);
    }
    
    return 0;
}



// Path: derivative.h
