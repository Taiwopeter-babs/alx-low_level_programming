#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates block of memory on the heap
 * and frees the previously allocated memory
 * @ptr: pointer to address of previously allocated memory heap
 * @old_size: previous size of memory
 * @new_size: new size of memory
 * Return: pointer to newly allocated heap of memory, otherwise check
 * conditions
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
		malloc(new_size);

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
	}

	return (ptr);
}
