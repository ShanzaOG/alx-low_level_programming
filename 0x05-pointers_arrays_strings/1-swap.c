#include "main.h"

/**
 * swap_int - check description
 * @a: pointer to integer a
 * @b: pointer to integer b
 * Description: swaps the values of two integers
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
