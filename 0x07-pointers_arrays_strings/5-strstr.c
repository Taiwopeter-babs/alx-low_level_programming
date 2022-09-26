#include "main.h"

/**
 * _strstr - checks for occurrence of the substring in original string
 * @haystack: pointer to string to be examined
 * @needle: pointer to string of interest
 * Description: function checks if there is matching string "needle"
 * present in the string "haystack"
 * It returns the pointer to the string, otherwise NULL.
 * Return: to resulting pointer string
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; *(haystack + i); i++)
	{
		for (j = 0; *(needle + j); j++)
		{
			if (*(haystack + i) == *(needle + j))
			{
				return (needle);
			}
		}
	}
	return ('\0');
}

