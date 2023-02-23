#include "main.h"
/**
 * print_line - draws a straight line
 * @n: integer n
 * Description: uses _putchar to print line
 * Return: nothing
 */
void print_line(int n)
{
	char i = '_';
	int j;

	if (n >= 1)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
