/*
    CopyRight: Akbar Tangirov (E30C)
    Ajou University in Tashkent Electrical and Computer Engineering Department
    date: 04/28/2023
    description: Test problems
*/
#include <stdio.h>
#include <math.h>

float fsin(float *x)
{
	return sin(*x);
}

void farr(int *x)
{
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", x[i]);
	}
}

int main(void)
{
	int i, sum = 0, A[] = {10, 19, 99};
	float pi = 3.1415926;

	printf("name: Akbar (E30C)\n\n");

	for (i = 2; i < 21; i+=2)
	{
		printf("%d  ", i);
		sum = sum + i;
	}
	printf("sum: %d\n\n", sum);
	printf("sin(pi) = %f\n\n", fsin(&pi));
	farr(&A[0]);
	return 0;
}
