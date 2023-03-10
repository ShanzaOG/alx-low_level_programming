#include "main.h"
/**
 * print_times_table - prints n times table
 * @n: integer n
 * Description: prints using _putchar
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n < 15 || n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;

				if ((k / 10) == 0)
				{
					if (j != 0)
						_putchar(' ');
					_putchar(k + '0');

					if (j == n)
						continue;
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
					if (j == n)
						continue;
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
