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

		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		printf("Age: %.6f\n", d->age);

		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}

}
