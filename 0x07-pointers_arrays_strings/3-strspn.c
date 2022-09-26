#include "main.h"
/**
 * _strspn - checks if a char exists in a string.
 * @s: pointer to string to be examined
 * @accept: string of comparison (prefix)
 * Description: function checks if string in accept is present in s.
 * It returns the number of matching characters.
 * Return: number of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int match_count = 0;
	unsigned int i, j;

	for (i = 0; *(s + i) != ' '; i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(accept + j) == *(s + i))
			{
				match_count++;
			}

		}
	}

	return (match_count);
}

