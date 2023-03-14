// #include <stdio.h>

// int main(void) {
//     printf("Hello, Akbar!\n");

//     return 0;
// }

// Akbar Tangirov E30C




// Function that return
// dot product of two vector array.
// int dotProduct(int vect_A[], int vect_B[])
// {

// 	int product = 0;

// 	// Loop for calculate dot product
// 	for (int i = 0; i < n; i++)

// 		product = product + vect_A[i] * vect_B[i];
// 	return product;
// }

// // Function to find
// // cross product of two vector array.
// void crossProduct(int vect_A[], int vect_B[], int cross_P[])

// {

// 	cross_P[0] = vect_A[1] * vect_B[2] - vect_A[2] * vect_B[1];
// 	cross_P[1] = vect_A[2] * vect_B[0] - vect_A[0] * vect_B[2];
// 	cross_P[2] = vect_A[0] * vect_B[1] - vect_A[1] * vect_B[0];
// }

// // Driver function
// int main()
// {

// 	int vect_A[] = { 3, -5, 4 };
// 	int vect_B[] = { 2, 6, 5 };
// 	int cross_P[n];

// 	// dotProduct function call
// 	cout << "Dot product:";
// 	cout << dotProduct(vect_A, vect_B) << endl;

// 	// crossProduct function call
// 	cout << "Cross product:";
// 	crossProduct(vect_A, vect_B, cross_P);

// 	// Loop that print
// 	// cross product of two vector array.
// 	for (int i = 0; i < n; i++)

// 		cout << cross_P[i] << " ";
// 	return 0;
// }






#include <stdio.h>
#include <math.h>

int main(void)
{
    float a = 3, b = 4, c = 5, A, B, C, R, s, pi, area;
    pi = acos(-1);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    R = (a * b * c) / (4 * area);
    A = (180 / pi) * asin(a / (2 * R));
    B = (180 / pi) * asin(b / (2 * R));
    C = (180 / pi) * asin(c / (2 * R));
    printf("Angles: %6.2f %6.2f %6.2f\n", A, B, C);

    return 0;
}










