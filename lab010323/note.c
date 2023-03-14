// Wednesday 11:30 Mar 01 2023
#include <stdio.h>
#include <math.h>
int i, A[3] = {4, 5, 6}, B[3] = {6, 7, 8};

//Declare name
void fun1() {
    printf("Akbar Tangirov\n\n");
}

//Calculate sin/cos
void fun2(int x) {
    int calc = 0;
    calc = sin(x)*sin(x)+cos(x)*cos(x);
    printf("%d\n", calc);
}

//Vextor calculation
void fun3(int arr[]) {    
    printf("vector A: ");
    for (int A=0; A<3; A++)  {
        printf("%d  ", arr[A]);
    }
    printf("\n");
    i = A[0]*B[0] + A[1]*B[1] + A[2]*B[2];
    printf("scalar product: %d\n\n", i);
}

//Find triangle
void fun4() {
    float a = 3, b = 4, c = 5, A, B, C, R, s, pi, area;
    pi = acos(-1);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    R = (a * b * c) / (4 * area);
    A = (180 / pi) * asin(a / (2 * R));
    B = (180 / pi) * asin(b / (2 * R));
    C = (180 / pi) * asin(c / (2 * R));
    printf("Triangle: %6.2f %6.2f %6.2f\n", A, B, C);

}

int main(void) {
    fun1();
    fun2(2), fun2(1), fun2(0), fun2(1), fun2(2);
    fun3(A);
    fun4();

    return 0;
}

