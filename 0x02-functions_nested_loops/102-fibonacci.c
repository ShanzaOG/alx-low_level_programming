#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n = 50;

	fibonacci(n);
	for (i = 0; i <= 50; i++)
	{
		a = fibonacci(i);
		printf("%d

	return 0;
}

int fibonacci(int n)
{
	int i;
	int a = 1;
	int b = 2;
		

	if (n < 1)
		i = 0;
	else if ( n == 1)
		i = 1;
	else
		i = fibonacci(n-1) + fibonacci(n-2);
	return (i);
}

