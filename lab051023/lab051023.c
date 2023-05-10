#include <stdio.h>

void name(void)
{
	printf("name: Akbar (E30C)\n");
}


int f_arr(int *x)
{
	for(int i = 0; i <= 4; i++)
		x[i] *= 2;
}


int main(void)
{
	int i, num, sum = 0, A[] = {1, 2, 3, 4};
	char S[] = "banana";

	// first solution
	name();

	// second solution 
	printf("Enter integer number: ");
	scanf("%d", &num);
	printf("num: %d\n", num);

	// third solution
	for (i = 3; i <= 30; i += 3)
		sum += i;
	printf("sum: %d\n", sum);

	// fourth solution
	printf("%s\n", S);
	for (i = 0; i < 6; i++)
		printf("ASCII code %c is %d\n", S[i], S[i]);

	// fifth solution
	f_arr(A);
	for (i = 0; i < 4; i++)
		printf("%d	", A[i]);
	printf("\n");

	return 0;
}
