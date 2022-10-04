#include "main.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
/**
 * argstostr - concatenates multiple strings and passes the result to a new
 * string separated by new line with allocated memory
 * @ac: string count (similar to argc)
 * @av: string vector (similar to argv)
 * Description: see README for comprehensive discussion
 * Return: pointer, otherwise NULL
 */
char *argstostr(int ac, char **av)
{
	int i;
	int len;
	char *new;
	char *separator = "\n";

	if (ac == 0 || av == NULL)
		return (NULL);

	len = _strlen(separator) * ac;

	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);
	len++;

	new = malloc((len + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);

	_strcpy(new, av[0]);
	_strcat(new, separator);

	for (i = 1; i < ac; i++)
	{
		_strcat(new, av[i]);
		_strcat(new, separator);
	}
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

/**
 * _strcat - concatenates two strings
 * @src: source string
 * @dest: destination string
 * Return: destination string
 */
char *_strcat(char *dest, char *src)
{
	int i, len;

	len = _strlen(dest);

	i = 0;

	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}

	dest[len + i] = '\0';

	return (dest);

}

