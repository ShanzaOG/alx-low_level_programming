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
	int random = 0;

	srand((unsigned int)(time(NULL)));

	char numbers[] = "0123456789";//array of numbers
	char letter[] = "abcdefghijklmnoqprstuvwyzx";
	char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char symbols[] = "!@#$^&*?";

	char pswd[n];//Stores random pswd
	random = rand() % 4;//to select randomizer inside the loop

	for (i = 0; i < n; i++)
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
