#include "main.h"
#include <stdlib.h>
/**
 * _strcpy - copies string pointed from src to dest
 * @dest: destination pointer of string
 * @src: source pointer of string
 * Return: pointer string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
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
		len++, s++;
	}
	return (len);
}
/**
 * word_count - count number of words/substrings in a string
 * @str: string which contains the words/substrings to be counted
 * Return: integer amount of words
 */
int word_count(char *str)
{
	int i, old_i, count = 0, len;

	len = _strlen(str);
	i = 0;
	while (i < len)
	{
		while (i < len)
		{
		/* loop through if spaces/separators are encountered */
			if (str[i] != ' ')
				break;
			i++;
		}
		old_i = i;
		while (i < len)
		{
		/* loop through if a substring is reached */
			if (str[i] == ' ')
				break;
			i++;
		}
		if (i > old_i)
			count += 1;
	}
	return (count);
}
/**
 * strtow - splits a string into an array of words with alloc'd memory
 * @str: string to be split
 * Return: pointer -> pointer of array i.e **ptr
 */
char **strtow(char *str)
{
	int i, j, len, words, alloc_memory, index = 0;
	char **ptr, buffer[2000];

	len = _strlen(str);
	words = word_count(str);
	if (words == 0)
		return (NULL);

	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(char *) * (words + 1));
	if (ptr == NULL)
		return (NULL);
	/* copy str[i] to buffer[j] if not ' ', then allocate memory */
	i = 0;
	while (i < len)
	{
		while (i < len)
		{
			if (str[i] != ' ')
				break;
			i++;
		}
		j = 0;
		while (i < len)
		{
			if (str[i] == ' ')
				break;
			buffer[j] = str[i];
			i++, j++;
		}
		if (j)
		{
			buffer[j] = '\0';
			alloc_memory = sizeof(char) * (_strlen(buffer) + 1);
			ptr[index] = malloc(alloc_memory);
			if (ptr[index] == NULL)
				return (NULL);
			_strcpy(ptr[index], buffer);
			index++;
		}
	}
	return (ptr);
}
