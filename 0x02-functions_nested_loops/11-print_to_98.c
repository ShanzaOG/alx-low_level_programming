#include "main.h"
/**
 * print_to_98 - prints natural numbers
 * @n: takes an integer n
 * Description: prints all natural numbers using _putchar
 * Return: nothing
 */
void print_to_98(int n)
{
	int i = 0;

	if (n >= 98)
	{
		for (i = 98; i >= n; i--)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n < 0)
	{
		i = n;
		while (i <= 98)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
		for (i = 0; i <= 98; i++)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
}
