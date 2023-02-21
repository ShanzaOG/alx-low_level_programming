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
	char str[8] = "_putchar";
	int i = 0;

	for (i = 0; i <= 8; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');

	return (0);
}
