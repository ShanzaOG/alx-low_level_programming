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
	char alf;

	for (alf = 'z'; alf <= 'a'; alf--)
		putchar(alf);
	putchar('\n');

	return (0);
}
