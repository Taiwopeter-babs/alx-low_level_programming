#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - initializes and conditions the members of
 * the struct dog
 * @d: pointer to structure
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{

	if (d->name == NULL)
	{
	printf("Name: (nil)\nAge: %.6f\nOwner: %s\n", d->age, d->owner);
	}
	if (d->age == '\0')
	{
		printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
	}
	if (d->owner == NULL)
	{
		printf("Name: %s\nAge: %.6f\nOwner: (nil)\n", d->name, d->age);
	}

}
