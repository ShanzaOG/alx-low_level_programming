#include "main.h"

/**
 * puts2 - check description
 * @str: pointer to char
 * Description: prints characters of a string followed by a new line
 * Return: Nothing
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
		len++;
	len -= 1;

	for (;i <= len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
