#include "main.h"
/**
 * _pow_recursion - check description
 * @x: the integer nmber
 * @y: the power
 * Description: return value of x raised to y
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	int z;

	if (y == 0)
		return (1);
	else if (y % 2 == 0)
	{
		z = _pow_recursion(x, y / 2);
		return (z * z);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
