#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string pointed to by src to the
 * buffer pointed to by dest
 *
 * @dest: destination pointer of string
 * @src: source pointer of string
 *
 * Return: pointer string
 */
char *_strcpy(char *dest, char *src)
{

	while (*src != '\0')
	{
		*dest = *src;

		src++;
		dest++;
	}
	*dest = '\0';

	return (dest);
}

