#include "main.h"

/**
 * print_times_table - prints multiplication table to n
 * @n: value the multiplication table is based on
 * Return: 0 (success)
 */
void print_times_table(int n)
{
	int i, j;
	int _product;

	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; ++i)
		{
			_putchar('0');
			for (j = 1; j <= n; ++j)
			{
				_putchar(',');
				_putchar(' ');
				_product = i * j;

				if (_product <= 99)
					_putchar(' ');
				if (_product <= 9)
					_putchar(' ');

				if (_product >= 100)
				{
					_putchar((_product / 100) + '0');
					_putchar((_product / 10) % 10 + '0');
				}
				else if (_product <= 99 && _product >= 10)
					_putchar((_product / 10) + '0');
				_putchar((_product % 10) + '0');

			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('0');
		_putchar('\n');
	}

}
