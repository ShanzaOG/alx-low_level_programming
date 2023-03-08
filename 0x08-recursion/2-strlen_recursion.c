#include "main.h"
/**
 * _strlen_recursion - check description
 * @s: pointer to char
 * Description: calculate string length
 * Return: integer value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return;
	return (1 + _strlen_recursion(s + 1));
}
