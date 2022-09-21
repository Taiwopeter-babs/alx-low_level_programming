#include "main.h"
int string_length(char *string);

/**
 * _strcat - concatenates two strings
 * @src: source string
 * @dest: destination string
 * Return: destination string
 */
char *_strcat(char *dest, char *src)
{
	int i, len;

	len = string_length(dest);

	i = 0;

	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}

	dest[len + i] = '\0';

	return (dest);

}

/**
 * string_length - computes the length of the string
 * @string: param
 *
 * Return: length
 */
int string_length(char *string)
{
	int length = 0;

	while (*string != '\0')
	{
		length++;
		string++;
	}
	return (length);
}
