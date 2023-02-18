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
	int b = '0';

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			if (a != b)
			{
			putchar(a);
			putchar(b);
			if (a == '8' && b == '9')
				continue;
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
