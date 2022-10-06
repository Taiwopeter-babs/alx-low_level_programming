#include "main.h"
#include <stdlib.h>
/**
 * _strlen - calculates the length of string in bytes
 * @str: paramter to be evaluated
 * Return: unsigned int
 */
int _strlen(char *str)
{
	unsigned int len;

	len = 0;
	while (*str != '\0')
		len++, str++;

	return (len);
}
/**
 * string_nconcat - concatenates two strings with limit of n
 * and allocates memory to resulting pointe
 * @s1: destination string
 * @s2: pointer string
 * @n: limit
 * Return: pointer to resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len_s1, len_s2, len_ptr;
	char *ptr;

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= len_s2)
		n = len_s2;
	/**
	 * allocated memory is the length of s1 + n
	 * n is the amount of memory s1 can take from s2
	 */
	len_ptr = len_s1 + n;
	ptr = malloc(sizeof(char) * len_ptr);
	if (ptr == NULL)
		return (NULL);
	/**
	 * If i < len_s1, copy content of s1 to ptr
	 * otherwise, i is now > len_s1 meaning i - len_s1
	 * will give the index of s2.
	 * Note: Index begins at 0
	 */
	for (i = 0; i < len_ptr; i++)
	{
		if (i < len_s1)
			*(ptr + i) = *(s1 + i);
		else
			*(ptr + i) = *(s2 + (i - len_s1));
	}
	*(ptr + i) = '\0';

	return (ptr);
}
