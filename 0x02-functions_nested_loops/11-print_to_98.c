#include <stdio.h>
/**
 * print_to_98 - prints natural numbers
 * @n: takes an integer n
 * Description: prints all natural numbers using printf
 * Return: nothing
 */
void print_to_98(int n)
{
	int i = n;

	if (i <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", i);
			if (i == 98)
				continue;
			printf(", ");
		}
	}
	else
	{
		for (; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
