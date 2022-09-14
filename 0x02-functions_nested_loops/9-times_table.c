#include "main.h"

/**
 * times_table - prints multiplication table to 9
 * Return: 0 (success)
 */
void times_table(void)
{
	int i, j;
	int _product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_product = i * j;
			if (_product >= 10)
			{
				_putchar((_product / 10) + '0');
				_putchar((_product % 10) + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			if (_product < 10)
			{
				_putchar(' ');
				_putchar(_product + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
