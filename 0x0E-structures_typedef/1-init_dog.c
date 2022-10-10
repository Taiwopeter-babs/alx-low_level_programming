#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes the members of the structure dog
 * and parses a pointer variable to a structure
 *
 * @d: pointer to structure
 * @name: member to be initialized
 * @age: member to be initialized
 * @owner: member to be initialized
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
