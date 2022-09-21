#include "main.h"
int string_length(char *string);

/**
 * _strncat - concatenates two strings but limiting to n bytes
 * @src: source string
 * @dest: destination string
 * @n: limting number of bytes
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = string_length(dest);

	i = 0;

	while (src[i] != '\0' && i < n)
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
