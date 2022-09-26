#include "main.h"

/**
 * _strchr - checks if a char exists in a string.
 * @s: pointer to string to be examined
 * @c: character of interest
 * Description: function checks if c is present in the string.
 * It returns the pointer to the string, otherwise NULL.
 * Return: to resulting pointer string
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	do {
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	} while (*(s + i));

	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}

