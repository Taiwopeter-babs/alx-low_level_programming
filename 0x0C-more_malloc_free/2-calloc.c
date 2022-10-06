#include "main.h"
#include <stdlib.h>
char *_memset(char *s, char b, unsigned int n);

/**
 * _calloc - allocates memory and sets it to 0.
 * hint: memset() function was used
 * @nmemb: number of items
 * @size: size of each item e.g sizeof(int)
 * Return: pointer to resulting string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	if (ptr)
	{
		_memset(ptr, 0, nmemb * size);
	}

	return (ptr);
}

/**
 * _memset - fills memory with constant byte
 * @s: pointer to memory to fill
 * @b: constant byte to fill memory with
 * @n: number of bytes to fill
 * Return: to resulting pointer string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);

}
