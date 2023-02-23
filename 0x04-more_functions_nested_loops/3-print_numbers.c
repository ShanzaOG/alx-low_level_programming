#include "main.h"
/**
 * print_numbers - prints numbers
 * Decription: prints from 0 through 9 using _putchar
 * Return: nothing
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
