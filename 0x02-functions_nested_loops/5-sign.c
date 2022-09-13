#include "main.h"

/**
 * print_sign - checks the case of the parameter
 * @n: paramter parsed to function
 *
 * Description: a single value is parsed as a parameter
 * and the function checks if the paramter is positive, negative
 * or is zero (0). Prints "+" for positive parameters, prints "-'
 * for negative parameters, and prints "0" for 0 value.
 * Return: 1 if value is positive, otherwise 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
		_putchar('\n');
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	_putchar('\n');
	return (0);
}
