#include "main.h"

/**
 * print_number - prints integer input
 * @n: parameter input
 *
 * Description: function takes n as a parameter and prints n as it is
 * Recursion is used here to remove the last digit. Since digits are
 * printed from left to right, recursion occurs before printing
 * the last character
 * Example:
 *	print_number(-2); --> -2
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int _number = n;

	/* checks for negativity */

	if (n < 0)
	{
		_putchar('-');
		_number = -_number;
	}

	/* Recursive step: removes the last digit */

	if (_number / 10)
	{
		print_number(_number / 10);
	}

	/* prints the last digit */

	_putchar(_number % 10 + '0');

	/* _putchar('\n'); */
}
