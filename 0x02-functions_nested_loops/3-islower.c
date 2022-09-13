#include "main.h"

/**
 * _islower - checks the case of the parameter
 * @c: paramter parsed to function
 *
 * Description: a single value is parsed as a parameter
 * and the function checks if the paramter is lowercase or
 * uppercase.
 * Return: 1 if value is nonzero, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		_putchar('1');
	else
		_putchar('0');
	return (0);
}
