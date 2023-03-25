#include <stdio.h>
//

double f(double x) {
    return x = x*x;
}

double derivative(double x, double h, double (*f)(double)) {
    return (f(x + h) - f(x)) / h;
}

int main() {
    double x_values[] = {0.2, 0.4, 0.6, 0.8, 1.0};
    double h = 0.01;
    
    // int num_points = sizeof(x_values) / sizeof(x_values[0]);
    
    for (int i = 0; i < 5; i++) {
        double x = x_values[i];
        double d = derivative(x, h, f);
        printf("derivative of f(x) at x = %.1f is %f\n", x, d);
    }
    
    return 0;
}


