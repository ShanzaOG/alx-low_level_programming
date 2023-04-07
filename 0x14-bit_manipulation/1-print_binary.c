#include "main.h"
#include <stdio.h>
/**
 * print_binary - Afunction that converrts decimal to binary
 * @n: unsigned long int n
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 32768;
	int printed = 0;

	while (mask > 0)
	{
		if ((n & mask) == mask)
		{
			printed = 1;
			_putchar('1');
		}
		else if (printed)
			_putchar('0');
		mask >>= 1;
	}
	if (!printed)
		_putchar('0');
}
