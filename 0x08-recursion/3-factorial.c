#include "main.h"
/**
 * factorial - check description
 * @n: integer
 * Description: returns factorial of a number;
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
