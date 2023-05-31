#include <stdio.h>

int main() {
    int A[3] = {2,5,3};
    int B[3] = {2,3,4};
    for (int i=0; i<3; i++) {
        printf("%d\n", A[i]*B[i]);
    }

    return 0;
}
