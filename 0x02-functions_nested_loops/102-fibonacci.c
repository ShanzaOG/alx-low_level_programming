#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	long int fibo[50], sum = 2;

	fibo[0] = 1;
	fibo[1] = 2;

	for (i = 2; i < 50; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
		if ((fibo[i] % 2) == 0 && fibo[i] < 4000000)
			sum += fibo[i];
	}
	printf("%ld\n", sum);

	return (0);
}


