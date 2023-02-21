#include "main.h"
/**
 * print_aplhabet_x10 : see description below
 * Description: prints the alphabets 10 times
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char str;
	int i = 0;

	while (i < 10)
	{
		for (str = 'a'; str <= 'z'; str++)
			_putchar(str);
		_putchar('\n');
		i++;
	}
}
