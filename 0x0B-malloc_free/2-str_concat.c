#include "main.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * str_concat - concatenates two strings and passes the result to a new
 * string with allocated memory
 * @s1: string to receive and pass to new string
 * @s2: string to give
 * Description: if the original string is not null, calculate its length
 * Return: char or NULL if there's a failure in malloc or if str == NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *new;
	char st1[100], st2[100];

	/* copying string literals to new buffers ensures manipulation */
	_strcpy(st1, s1);
	_strcpy(st2, s2);

	len1 = _strlen(st1);
	i = 0;
	while (st2[i] != '\0')
	{
		st1[len1 + i] = st2[i];
		i++;
	}
	st1[len1 + i] = '\0';
	/* --------------------------- */
	len2 = _strlen(st1);
	new = malloc((len2 + 1) * sizeof(char));

	if (new == NULL)
		return (NULL);
	j = 0;
	while (st1[j] != '\0')
	{
		new[j] = st1[j];
		j++;
	}
	new[j] = '\0';

	return (new);
}

/**
 * _strlen - calculates the length of string in bytes
 * @s: paramter to be evaluated
 * Return: nothing
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
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
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

