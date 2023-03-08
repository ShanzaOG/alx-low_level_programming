#include "main.h"
/**
 * _puts_recursion - check description
 * @s: pointer to char
 * Description: print a string followed by a new line
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
