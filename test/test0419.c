/*
	CopyRight: Akbar Tangirov (E30C)
	Ajou university in Tashkent Electrical and Computer Engineering department
	date: 04/1p/2023
	Description: Test
*/
#include <stdio.h>
#include <math.h>

float sinx(float x)
{
	return sin(x);
}

int func(int a[])
{
	int sum = 0;
	for (int i=0; i < 3; i++)
	{
		sum += a[i];
	}
	return printf("array sum: %d\n", sum);
}

void func3(void)
{
	
	for (int i=1; i <= 3; i++)
	{
		for (int j=1; j <= 3; j++)
		{
			printf("%d * %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
}


int main(void)
{
	printf("name: Akbar (E30C)\n");
	int sum = 0;
	for (int i=2; i<21; i+=2)
	{
		sum += i;
		printf("%d  ", i);
	}
	printf("sum: %d\n", sum);

	float fun = sinx(4);
	printf("sin(%.2f)\n", fun);
	
	int A[] = {1, 2, 3};
	func(A);
	
	func3();
	float r = 4;
	float y = 2 * M_PI * r;
	printf("r = %.0f\nyuza: %f\n", r, y);
}
	
	


