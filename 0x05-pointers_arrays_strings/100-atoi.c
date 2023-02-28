#include "main.h"

/**
 * _atoi - check description
 * @s: pointer to char
 * Description: converts string to integer
 * Returns: int value and zero if null
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			result *= 10 +(s[i] - '0');
		else
			return (0);
	}
	return (sign * result);
}
