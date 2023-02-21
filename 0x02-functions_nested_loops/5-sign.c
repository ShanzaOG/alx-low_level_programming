#include "main.h"
/**
 * print_sign - Function that prints the sign of a number
 * @n: Take argument of integer type
 * Description: uses _putchar to print
 * Return: 1 (if poitive) 0(if zero) -1(if negative)
 */

int print_sign(int n)
{
	int i = -1;

	if (n > 0)
	{
		_putchar('+');
		i = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		i = 0;
	}
	else
		_putchar('-');
	return (i);
}


