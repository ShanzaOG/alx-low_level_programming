#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: count of arguments supplied to the program
 * @argv: An argument values
 * Return: 0 successful
 */
int main(int argc, char *argv[])
{
	int higher, lower, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		higher = atoi(argv[1]);
		lower = atoi(argv[0]);
		result = higher * lower;
		printf("%d\n", result);
	}

	return (0);
}
