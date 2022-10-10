#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees the memory of instance of dog_t
 * @d: pointer to instance
 * Return: pointer to type dog_t
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
