#include "main.h"
/**
 * is_prime_number1 - check description
 * @n: integer
 * @i: integer
 * Description: checks if number is prime
 * Return: 1 if prime and 0 if not
 */
int is_prime_number1(int n, int i)
{
	if (n <= 2)
		return ((n == 2) ? 1 : 0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (is_prime_number1(n, i + 1));
}

/**
 * is_prime_number - check description
 * @n: integer
 * Description: checks if number is prime
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	return (is_prime_number1(n, 2));
}
