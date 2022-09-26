#include "main.h"

/**
 * _strpbrk - checks for occurrence of first matching byte
 * @s: pointer to string to be examined
 * @accept: pointer to string of interest
 * Description: function checks if there is present in the string s that
 * matches any byte in accept.
 * It returns the pointer to the string, otherwise NULL.
 * Return: to resulting pointer string
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}

