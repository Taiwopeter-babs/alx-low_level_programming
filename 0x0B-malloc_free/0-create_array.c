#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of array
 * @c: character to be initialized
 *
 * Return: char or NULL if there's a failure in malloc or if size == 0
 */
char *create_array(unsigned int size, char c)
{
	char *ptr_ch;
	unsigned int i;

	ptr_ch = malloc(size * sizeof(char) + 1);

	if (ptr_ch == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		*(ptr_ch + i) = c;
		i++;
	}
	*(ptr_ch + i) = '\0';

	return (ptr_ch);
}
