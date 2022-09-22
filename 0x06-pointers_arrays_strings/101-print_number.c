#include "main.h"

/**
 * print_number - prints a given number parsed as an argument
 * @n: integer to be printed
 *
 * Return: pointer to string
 */
void print_number(int n)
{
	/* use unsigned to solve edge cases of large values */
	unsigned int num = n;

	/* check for negative signs */
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	/* check if n returns a value other than 0 when divided by 10 */
	if (num / 10)
	{
		print_number(num / 10);
	}

	/* print the last digit on the stdout */
	_putchar((num % 10) + '0');
}

