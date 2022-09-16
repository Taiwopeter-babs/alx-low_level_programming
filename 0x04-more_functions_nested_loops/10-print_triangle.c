#include "main.h"

/**
 * print_triangle - prints triangle of characters of size
 * @size: size of the triagle
 *
 * Description: function takes n as a parameter and prints "#"
 * in the shape of triangle.
 * Example:
 *	print_triangle(2); --> #
 *			      ##
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (i + j <= size)
					_putchar(' ');
				else
					_putchar('#');

			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
		_putchar('\n');
}
