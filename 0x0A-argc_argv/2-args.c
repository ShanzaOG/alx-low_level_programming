#include <stdio.h>
/**
 * main - entry point
 * @argc: count of arguments supplied to the program
 * @argv: An argument values
 * Return: 0 successful
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
