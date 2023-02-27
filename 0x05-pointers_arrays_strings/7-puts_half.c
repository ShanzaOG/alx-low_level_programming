#include "main.h"

/**
 * puts_half - check description
 * @str: pointer to char
 * Description: prints half a string followed by a new line
 * Return: Nothing
 */
void puts_half(char *str)
{
	int full_len = 0;
	int half_len, n;
	int i = 0;

	while (str[full_len] != '\0')
		full_len++;

	full_len -= 1;
	half_len = full_len / 2;

	if (full_len / 2 == 0)
	{
		n = half_len + 1;
		for (i = n; i <= full_len; i++)
			_putchar(str[i]);
	}

	else
	{
		n = (full_len - 1) / 2;
		n += 1;

		for (i = n; i <= full_len; i++)
			_putchar(str[i]);
	}

	_putchar('\n');
}
