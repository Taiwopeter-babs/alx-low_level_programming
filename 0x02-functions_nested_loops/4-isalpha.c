#include "main.h"

/**
 * _isalpha - checks if the parameter is alphabetic
 * @c: paramter parsed to function
 *
 * Description: a single value is parsed as a parameter
 * and the function checks if the paramter is a letter,
 * uppercase or lowercase
 * Return: 1 if value is nonzero, otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
	return (0);
}
