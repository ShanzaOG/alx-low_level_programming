#include "main.h"
/**
 * _sqrt_helper - helper function
 * @prev: prev value
 * @root: sqrt value
 * Description: searches if mid value is square root of n
 * Return: int
 */
int _sqrt_helper(int prev, int root)
{
	if (prev > root)
		return (-1);
	if (prev * prev == n)
		return (prev);
	else
		return (_sqrt_helper(prev + 1, root));
}

/**
 * _sqrt_recursion - check description
 * @n: integer
 * Description: returns sqrt
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(1,n));
}
