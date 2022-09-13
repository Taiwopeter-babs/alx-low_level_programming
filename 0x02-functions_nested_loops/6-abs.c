#include "main.h"

/**
 * _abs - computes the absolute value
 * @n: paramter parsed to function
 *
 * Description: a single value is parsed as a parameter
 * and the function checks if the paramter is positive, negative
 * or is zero (0). Returns the non-negative values
 * Return: 0
 */
int _abs(int n)
{
	int val = -1;

	if (n > 0)
		return (n);

	else if (n < 0)
		return (n * val);

	else if (n == 0)
		return (0);

	_putchar('\n');
	return (0);
}
