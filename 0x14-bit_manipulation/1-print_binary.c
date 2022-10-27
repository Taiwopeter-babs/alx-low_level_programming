#include "main.h"
/**
 * print_binary - prints a binary representation of a number
 * @n: parameter
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int num;

	if (n == 0)
		_putchar('0');

	for (i = 31; i >= 0; i--)
	{
		num  = n >> i;

		if (num == 0)
			continue;

		if (num & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
