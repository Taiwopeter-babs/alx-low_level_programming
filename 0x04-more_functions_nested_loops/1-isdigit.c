#include "main.h"

/**
 * _isdigit - checks for digit 0-9
 * @c: parameter to check
 *
 * Return: integer; 1 if c is digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		c = c - '0';

		return (1);
	}
	else
		return (0);

	return (0);
}
