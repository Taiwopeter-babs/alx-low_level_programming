#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: paramter parsed to function
 *
 * Description: a single value is parsed as a parameter
 * and the function returns the last digit from its computation
 *
 * Return: last digit, and 0 (success)
 */
int print_last_digit(int n)
{
	int remainder;
	int val = -1;
	int abs_n;

	if (n < 0)
	{
		abs_n = n * val;
		remainder = abs_n % 10;
	}
	else if (n > 0)
	{
		remainder = n % 10;
	}
	else if (n == 0)
		remainder = n % 10;


	_putchar(remainder + '0');
	return (remainder);
	return (0);
}
