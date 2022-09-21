#include "main.h"
int string_length(char *string);

/**
 * _strncpy - copies from src to dest
 * @src: source string
 * @dest: destination string
 * @n: limting number of bytes
 * Description: The string copied from src replaces the n number
 * of characters in the destination. If the amount of bytes copied 
 * from src is less than n, the resulting string will have additions of
 * null characters.
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	 int i = 0;

	/* int len = string_length(dest); */

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

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
