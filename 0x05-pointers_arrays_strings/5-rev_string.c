#include "main.h"

/**
 * _strlen - check description
 * rev_string - check description
 * @s: pointer to char
 * Description: prints a string followed by a new line
 * Return: Nothing
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
void rev_string(char *s)
{
	char p;
	int i = 0;
	int len = _strlen(s) - 1;

	while (i < len)
	{
		p = s[i];
		s[i++] = s[len];
		s[len--] = p;
	}
}
