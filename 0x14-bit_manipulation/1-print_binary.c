#include "main.h"
#include <stdio.h>
/**
 * print_binary - Afunction that converrts decimal to binary
 * @n: unsigned long int n
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
