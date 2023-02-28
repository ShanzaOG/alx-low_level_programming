#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/**
 * PasswordGen - check description
 * @n: integer n
 * Description: generates random pswd
 * Return: Nothing
 */

void PasswordGen(int n)
{
	int i = 0;
	const int a = n;
	int random = 0;
	char pswd[a];
	char numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnoqprstuvwyzx";
	char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char symbols[] = "!@#$^&*?";

	srand((unsigned int)(time(NULL)));

	random = rand() % 4;

	for (i = 0; i < a; i++)
	{
		if (random == 1)
		{
			pswd[i] = symbols[rand() % 10];
			random = rand() % 4;
			printf("%c", pswd[i]);
		}
		else if (random == 2)
		{
			pswd[i] = numbers[rand() % 8];
			random = rand() % 4;
			printf("%c", pswd[i]);
		}
		else if (random == 3)
		{
			pswd[i] = LETTER[rand() % 26];
			random = rand() % 4;
			printf("%c", pswd[i]);
		}
		else
		{
			pswd[i] = letter[rand() % 26];
			random = rand() % 4;
			printf("%c", pswd[i]);
		}
	}
}
