#include "main.h"

/**
 * print_square - prints equal number of characters on each line
 * @size: size of the square
 *
 * Description: function takes n as a parameter and prints "#"
 * n times.
 * Example:
 *	print_line(2); --> ##
 *			   ##
 * Return: 0
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			j = 1;
			while (j <= size)
			{
				_putchar('#');

				j++;
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
		_putchar('\n');
}
