#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: count of arguments supplied to the program
 * @argv: An argument values
 * Return: 0 successful
 */
int main(int argc, char *argv[])
{
	int num, i = 0, result = 0;

	while (argc-- > 1)
	{
		for (; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
