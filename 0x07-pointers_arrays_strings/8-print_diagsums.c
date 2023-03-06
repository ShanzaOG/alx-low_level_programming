#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer to integer
 * @size: integer
 * Description: the sum is of a square matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0, sum2 = 0;

	for (; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - 1 - i));
	}
	_putchar(sum1);
	_putchar(sum2);
}
