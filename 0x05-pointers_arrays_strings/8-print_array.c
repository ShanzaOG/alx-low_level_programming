#include <stdio.h>

/**
 * print_array - check description
 * @a: pointer to integer
 * @n: integer
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}


