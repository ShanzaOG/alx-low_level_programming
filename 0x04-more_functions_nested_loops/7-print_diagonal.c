#include "main.h"
/**
 * print_diagonal - draws a straight line
 * @n: integer n
 * Description: uses _putchar to print line
 * Return: nothing
 */
void print_diagonal(int n)
{
	int j, i;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < j; i++)

				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
