#include "main.h"
#include <stdio.h>
/**
 * print_binary - Afunction that converrts decimal to binary
 * @n: unsigned long int n
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;

	mask = 1ul << (sizeof(unsigned long int) * 8 - 1);
	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}
