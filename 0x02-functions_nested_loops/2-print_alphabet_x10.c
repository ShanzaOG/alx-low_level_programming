#include "main.h"
/**
 * print_alphabet_x10 - Check main.h
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char str;
	int i = 0;

	while (i < 10)
	{
		for (str = 'a'; str <= 'z'; str++)
			_putchar(str);
		_putchar('\n');
		i++;
	}
}
