#include "main.h"
/**
 * get_bit - returns the value og a bit at a given index
 * @n: unsigned long int
 * @index: unsigned int index
 * Return: integer value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1 << index;

	return ((n & mask) != 0);
}
