#include "main.h"
/**
 * jack_bauer - prints every minute
 * Description: uses _putchar in main.h
 * Return: Nothing
 */

void jack_bauer(void)
{
	int p, q;

	for (p = 0; p <= 23; p++)
	{
		for (q = p + 1; q <= 59; q++)
		{
			_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');
			_putchar(':');
			_putchar((q / 10) + '0');
			_putchar((q % 10) + '0');

			_putchar('\n');
		}
	}

	_putchar('\n');

}
