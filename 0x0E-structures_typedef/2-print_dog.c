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
	if (d != NULL)
	{

		if (d->name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %.6f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}

}
