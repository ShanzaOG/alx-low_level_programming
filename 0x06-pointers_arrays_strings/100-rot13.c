#include "main.h"

/**
 * rot13 -  a function that encodes a string using rot13.
 * @s: An input string to encode using rot13
 * Return: An encode string
 */
char *rot13(char *str)
{
	char *p = str;
	int c;

	while (*p)
	{
		c = *p;

		if (c >= 'a' && c <= 'z')
		{
			c = ((c - 'a') + 13) % 26 + 'a';
		}
		else if (c >= 'A' && c <= 'Z')
		{
			c = ((c - 'A') + 13) % 26 + 'A';
		}
		*p++ = c;
	}
	return (str);
}
