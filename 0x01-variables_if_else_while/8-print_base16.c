#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char elf, a = '0';

	while (a < '10')
	{
		putchar(a);
		a++;
	}
	for (elf = 'a'; elf <= 'f'; elf++)
		putchar(elf);
	putchar('\n');

	return (0);
}
