// Add two matrix using pointers A and B
#include <stdio.h>

int add(int *A, int *B, int *C)
{
    for (int i = 0; i < 6; i++)
    {
        *(C + i) = *(A + i) + *(B + i);
    }
    return 0;
}

// print matrix
int print(int *A, int *B)
{
    for (int i = 0; i < 3; i++)
    {
        printf("%d  %d  %d  \n", *(A + i * 3), *(A + i * 3 + 1), *(A + i * 3 + 2));
    }

    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d  %d  %d  \n", *(B + i * 3), *(B + i * 3 + 1), *(B + i * 3 + 2));
    }
}

int main(void)
{
    int A[3][3] = {{1,2,3},{4,5,6},{3,2,1}};
    int B[3][3] = {{7,8,9},{0,1,2},{1,2,3}};
    int C[3][3] = {};

    add(&A[0][0], &B[0][0], &C[0][0]);

    print(&A[0][0], &B[0][0]);
    printf("\n");
    printf("%d  %d  %d  \n", C[0][0], C[0][1], C[0][2]);
    printf("%d  %d  %d  \n", C[1][0], C[1][1], C[1][2]);
    return 0;
}