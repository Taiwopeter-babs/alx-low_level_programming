#include "main.h"

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


