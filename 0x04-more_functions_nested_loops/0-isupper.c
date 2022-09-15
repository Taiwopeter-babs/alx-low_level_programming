#include "main.h"

/**
 * _isupper - checks for upper case character
 * @c: parameter to check
 *
 * Return: integer; 1 if c is upper case, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (0);
	}

	return (0);
}
