#include <stdio.h>
/**
 * main - entry point
 * @argc: count of arguments supplied to the program
 * @argv: array of strings to the arguments
 * Return: 0 successful
 */
int main (int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
