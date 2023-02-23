#include "main.h"
/**
 * print_line - draws a straight line
 * @n: integer n
 * Description: uses _putchar to print line
 * Return: nothing
 */
void print_line(int n)
{
	int j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
