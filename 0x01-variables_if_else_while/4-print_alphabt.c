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
	char alf, e, q;

	e = 'e';
	q = 'q';

	for (alf = 'a'; alf <= 'z'; alf++)
	{
		if (alf != q && alf != e)
			putchar(alf);
	}
	putchar('\n');

	return (0);
}
