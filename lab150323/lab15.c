// Wednesday 11:30 Mar 01 2023
#include <stdio.h>
#include <math.h>
int i, A[3] = {4, 5, 6}, B[3] = {6, 7, 8};

//Declare name
void fun1() {
    printf("Akbar Tangirov\n\n");
}

//Print odd number
void fun2() {
    int odd;    
    for (odd=1; odd<10; odd++)  {
        printf("%d  \n", odd);
        odd+=1;
    }
}

//Calculate fun(x,y)
void fun3() {
    int x, y, sum;
    for (x=1; x<5; x++) {
        for (y=1; y<5; y++) {
            sum = x * x * y;
            printf("%d * %d * %d = %d\n", x, x, y, sum);
        }
        
    }
}

//Matrix
void fun4() {    
    int C[2][3] = {1, 2, 3, 4, 5, 6};
    int D[2][3];
    int x, y;
    for (x=0; x<2; x++) {
        for (y=0; y<3; y++) {
            D[x][y] = C[x][y];
            printf("[%d %d] = %d\n", x, y, D[x][y]);
        }
    }
}

//Find triangle
void fun5() {
    int A = 5;
    int *B = &A;
    A + 3;
    printf("B %d  \n", B);
    printf("A %d  \n", A +3);

}

int main() {
    fun1();
    fun2();
    fun3();
    fun4();
    fun5();

    return 0;
}

