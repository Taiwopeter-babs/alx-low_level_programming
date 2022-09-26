#include "main.h"

/**
 * print_chessboard - print the chessboard with 2-D array
 * @a: array with 8 columns
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
			{
				_putchar('\n');
			}
		}
	}
}

