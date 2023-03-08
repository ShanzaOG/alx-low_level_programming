#include "main.h"

/**
 * _sqrt_recursion - check description
 * @n: integer
 * Description: returns sqrt
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	int low = 1;
	int high = n;
	int mid;

	if (n == 0 || n == 1)
		return (n);
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (mid * mid == n)
			return (mid);
		else if (mid * mid < n)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
