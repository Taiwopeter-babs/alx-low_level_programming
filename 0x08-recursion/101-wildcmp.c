#include "main.h"
/**
 * wildcmp - Compares two strings, '*' is a wildcard character
 * @s1: first string
 * @s2: Second string
 * Return: 1 if string is identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{

	if (*s2 == '*' && *(s2 + 1) == '\0')
		return (1);

	if (*s2 == '*' && *(s2 + 1) == '*')
		return (wildcmp(s1, s2 + 1));

	if (*s1 != *s2)
	{
		return (0);
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	return (wildcmp(s1 + 1, s2 + 1));
}
