#include "main.h"

/**
 * puts2 - check description
 * @str: pointer to char
 * Description: prints characters of a string followed by a new line
 * Return: Nothing
 */
void puts2(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		_putchar(*p);
		p += 2;
	}
	_putchar('\n');
}
