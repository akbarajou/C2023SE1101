#include <stdio.h>

// Define constants for array sizes
#define SIZE_A 4
#define SIZE_S 6

// Print name and class information
void print_name(void){
    printf("name: Akbar (E30C)\n");
}

// Double the elements of an integer array
void double_array_elements(int *x, int size){
    for(int i = 0; i < size; i++)
        x[i] *= 2;
}

int main(void){
    int i, num, sum = 0;
    int A[SIZE_A] = {1, 2, 3, 4};
    char S[SIZE_S] = "banana";

    // First solution: print name and class information
    print_name();

    // Second solution: read an integer from user input and print it
    printf("Enter integer number: ");
    scanf("%d", &num);
    printf("num: %d\n", num);

    // Third solution: calculate and print the sum of multiples of 3 from 3 to 30
    for (i = 3; i <= 30; i += 3)
        sum += i;
    printf("sum: %d\n", sum);

    // Fourth solution: print a string and its ASCII codes
    printf("%s\n", S);
    for (i = 0; i < SIZE_S; i++)
        printf("ASCII code %c is %d\n", S[i], S[i]);

    // Fifth solution: double the elements of an integer array and print them
    double_array_elements(A, SIZE_A);
    for (i = 0; i < SIZE_A; i++)
        printf("%d ", A[i]);
    printf("\n");

    return 0;
}
