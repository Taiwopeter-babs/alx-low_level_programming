#include "main.h"

/**
 * times_table - prints multiplication table to 9
 * Return: 0 (success)
 */
void times_table(void)
{
	int i, j;
	int _product;

	for (i = 0; i <= 9; ++i)
	{
		_putchar('0');
		for (j = 1; j <= 9; ++j)
		{
			_putchar(',');
			_putchar(' ');
			_product = i * j;
			if (_product >= 10)
			{
				_putchar((_product / 10) + '0');
				_putchar((_product % 10) + '0');
			}
			if (_product <= 9 && j < 9)
			{
				_putchar(' ');
				_putchar(_product + '0');
			}
			else if (_product <= 9 && j >= 9)
			{
				_putchar(' ');
				_putchar(_product + '0');
			}

		}
		_putchar('\n');
	}
}
