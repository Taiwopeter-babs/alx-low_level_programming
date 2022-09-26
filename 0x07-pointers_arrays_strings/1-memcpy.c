#include "main.h"

/**
 * _memcpy - copies memory with constant byte
 * @dest: pointer to destination memory where content will be copied to 
 * @src: pointer to source memory where content will be copied from
 * @n: number of bytes to copy from src
 * Return: to resulting pointer string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*dest = *src;
		i++;
		src++;
		dest++;
	}


	return (dest);
}

