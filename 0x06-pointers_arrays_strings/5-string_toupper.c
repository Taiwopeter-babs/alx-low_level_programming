#include "main.h"

/**
 * string_toupper - converts all the letters to uppercase
 * @ptr: pointer
 * Return: pointer string
 */
char *string_toupper(char *ptr)
{
	int i;

	for (i = 0; *(ptr + i) != '\0'; i++)
	{
		if (*(ptr + i) >= 'a' && *(ptr + i) <= 'z')
		{
			*(ptr + i) = (*(ptr + i) - 'a') + 'A';
		}
	}

	return (ptr);

}

