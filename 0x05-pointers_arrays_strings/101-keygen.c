#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/**
 * PasswordGen - check description
 * @n: integer n
 * Description: generates random password
 * Return: Nothing
 */

void PasswordGen(int n)
{
	int i = 0;
	int random = 0;

	// Seed the random-number generator
	// with current time so that numbers will
	// be different everytime

	srand((unsigned int)(time(NULL)));

	char numbers[] = "0123456789";//array of numbers
	char letter[] = "abcdefghijklmnoqprstuvwyzx";
	char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char symbols[] = "!@#$^&*?";

	char password[n];//Stores random password
	random = rand() % 4;//to select randomizer inside the loop

	for (i = 0; i < n; i++)
	{
		if (random == 1)
		{
			password[i] = symbols[rand() % 10];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random == 2)
		{
			password[i] = symbols[rand() % 8];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random == 3)
		{
			password[i] = symbols[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
	}
}
