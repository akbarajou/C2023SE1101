/*
    CopyRight: Akbar Tangirov (E30C)
    Ajou University in Tashkent Electrical and Computer Engineering Department
    date: 04/26/2023
    description: Lab problems
*/
#include <stdio.h>
#include <math.h>

float func(float x)
{
	return sin(x);
}

void arr(int x[])
{
	for (int i=0; i<3; i++)
	{
		printf("%d  ", x[i]);
	}
}

int main(void)
{
	// print my name
	printf("name: Akbar Tangirov (E30C)\n\n");

	// even numbers
	int sum = 0;
	for (int i=2; i<21; i+=2)
	{
		printf("%d  ", i);
		sum = sum + i;
	}
	printf("sum: %d\n\n", sum);

	// sin(x)
	printf("sin(1) = %.2f\n\n", func(1));

	// array
	int A[] = {1, 2, 3};
	arr(A);

	// ASCII code
	char S[] = "banana";
	printf("\n\n%s\n", S);
	for (int i=0; i<7; i++)
	{
		printf("ASCII code %c is %d\n", S[i], S[i]);
	}
}
	
