#include "main.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * _strdup - copies a given string to new string with memmory allocation
 * @str: string to be duplicated
 *
 * Return: char or NULL if there's a failure in malloc or if str == NULL
 */
char *_strdup(char *str)
{
	int i;
	char *new_str;
	int len = _strlen(str);

	new_str = malloc((len + 1) * sizeof(char));
	
	if (str == NULL)
		return (NULL);
	i = 0;
	while (*(str + i) != '\0')
	{
		*(new_str + i) = *(str + i);
		i++;	
	}
	*(new_str + i) = '\0';

	return (new_str);
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
