/*
    CopyRight: Akbar Tangirov (E30C)
    Ajou University in Tashkent Electrical and Computer Engineering Department
    date: 04/14/2023
    description: Find angles of triangle
*/
#include <stdio.h>
#include <math.h>

// print my name
void name(void)
{
	printf("name: Akbar T (E30C)\n\n");
}


// find of triangle's angles
void triangle(void)
{
	double a = 3, b = 4, c = 5;	// lenght of angle
	double A, B, C;    // angles 
	double pi = 3.14159265359;	// pi

	A = asin(a / c) * 180 / pi;
	B = acos(a / c) * 180 / pi;
	C = 180 - A - B;
	
	printf("Angle A: %f\n", A);
	printf("Angle B: %f\n", B);
	printf("Angle C: %f\n", C);
}

// main function
int main(void)
{
	name();
	triangle();	
}