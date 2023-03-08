#include "main.h"
/**
 * _strlen_recursion - check description
 * @s: pointer to char
 * Description: calculate string length
 * Return: integer value
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
		return (0);
	n = 1 + _strlen_recursion(s + 1);
	return (n);
}
