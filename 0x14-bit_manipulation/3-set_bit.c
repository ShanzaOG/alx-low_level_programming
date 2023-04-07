#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to unsigned long int
 * @index: unsigned int
 * Return: integer value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1ul << index;

	if (n == NULL || index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= mask;
	return (1);
}
