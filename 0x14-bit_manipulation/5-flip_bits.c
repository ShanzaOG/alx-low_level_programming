#include "main.h"
/**
 * flip_bits - function that flips bits to get one number to another
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: unsigned integer value
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
