#include <stdio.h>
/**
 * main - entry point
 * @argc: count of arguments supplied to the program
 * @argv: An argument values
 * Return: 0 successful
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
