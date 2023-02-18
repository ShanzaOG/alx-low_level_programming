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
	int a = '0';
	char elf;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (elf = 'a'; elf <= 'z'; elf++)
		putchar(elf);
	putchar('\n');

	return (0);
}
