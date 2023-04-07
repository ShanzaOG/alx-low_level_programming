#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at given index
 * @n: pointer to unsigned int
 * @index: unsigned int
 * Return: integer value
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1ul << index);
	return (1);
}
