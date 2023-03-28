#include <stdio.h>

/*write program taking the derivative of a function
  using this formula: f'(x) = (f(x+h) - f(x))/h
  where h is 0.01
  and f(x) = x^2*/

int main() {
    double x_values[] = {0.2, 0.4, 0.6, 0.8, 1.0};
    double h = 0.01;
    double f(double x) {
        return x = x*x;
    }
    
    for (int i = 0; i < 5; i++) {
        double x = x_values[i];
        double d = (f(x + h) - f(x)) / h;
        printf("derivative of f(x) at x = %.1f is %f\n", x, d);
    }
    
    return 0;
}



// Path: derivative.h
