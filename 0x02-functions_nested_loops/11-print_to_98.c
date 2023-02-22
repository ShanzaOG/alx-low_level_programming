#include <stdio.h>
/**
 * print_to_98 - prints natural numbers
 * @n: takes an integer n
 * Description: prints all natural numbers using printf
 * Return: nothing
 */
void print_to_98(int n)
{
	int i = 0;

	if (n >= 98)
	{
		for (i = 98; i >= n; i--)
		{
			printf("%d", i);
			if (i == 98)
				continue;
			printf(", ");
		}
	}
	else if (n < 0)
	{
		i = n;
		while (i <= 98)
		{
			printf("%d", i);
			if (i == 98)
				continue;			
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (i = 0; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
