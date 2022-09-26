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
	do {
		if (*s == c)
		{
			return (s);
		}
		s++;
	} while (*s);

	return (s);
}

