#include "main.h"

/**
 * times_table - prints multiplication table to 9
 *
 * Return: 0 (success)
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j < 9)
			{
				if (i * j >= 10)
				{
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
				_putchar(',');
				_putchar(' ');
				}
				else if (i * j < 10)
				{
				_putchar(i * j + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
			}
			else if (j == 9)
			{
				if (i * j >= 10)
				{
					_putchar((i * j) / 10 + '0');
					_putchar((i * j) % 10 + '0');
				}
				else if (i * j < 10)
				{
					_putchar(i * j + '0');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}

}

