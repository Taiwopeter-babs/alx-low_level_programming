#include "main.h"

/**
 * print_most_numbers - prints numbers from 0-9 excluding 2 & 4
 *
 * Return: null
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;

		_putchar(num + '0');
	}
	_putchar('\n');
}
