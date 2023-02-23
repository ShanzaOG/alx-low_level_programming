#include "main.h"
/**
 * _isupper - checks for uppercase
 * @c: integer c
 * Description: takes one arguments and uses _putchar to print
 * Return: 1 if uppercase and 0 otherwise
 */
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			i = 1;
	}
	else
		i = 0;
	return (i);
}
