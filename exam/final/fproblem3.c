/*
    CopyRight: Akbar Tangirov (E30C)
               Ajou University in Tashkent Electrical and Computer Engineering Department
    date: 05/20/2023
    description: Calculate the matrix multiplication of two matrices.

    Question: Write a program to calculate matrix multiplication C= AB.
              Matrix A is 3x2 and matrix B is 2x3.
*/
#include <stdio.h>

int main()
{
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int C[2][2] = {0, 0, 0, 0};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("C[0][0] = %d\n", C[0][0]);
    printf("C[0][1] = %d\n", C[0][1]);

    // printf("A %d   B %d\n", A[0][1], B[1][0]);

    return 0;
}


/*
    for loop
    C[0][0] = 22
        A[0][0](1) * B[0][0](1)
        A[0][1](2) * B[1][0](3)
        A[0][2](3) * B[2][0](5)

    C[0][1] = 28
        A[0][0](1) * B[0][1](2)
        A[0][1](2) * B[1][1](4)
        A[0][2](3) * B[2][1](6)
*/