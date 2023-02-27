#include "main.h"

/**
 * _puts - check description
 * @str: pointer to char
 * Description: prints a string followed by a new line
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchar(s[--len]);

	_putchar('\n');
}
