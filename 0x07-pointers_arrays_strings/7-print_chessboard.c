#include "main.h"
/**
 * print_chessboard - check description
 * @a[][8]: 2-d array
 * Description: prints chess board
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for(i = 0; i < 8; j++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
