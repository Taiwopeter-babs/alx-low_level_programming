#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: parameter
 *
 * Description: function takes n as a parameter and prints "\"
 * n times.
 * Example:
 *	print_line(2); --> \
 *			    \
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (i == j)
				{
					_putchar('\\');
				}
				else if (i > j)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else if (n <= 0)
		_putchar('\n');
}
