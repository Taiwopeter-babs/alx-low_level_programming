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
	while (*haystack)
	{
		while(*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle)
			return (needle);
	}
	return ('\0');
}

