#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function creates an instance of dog_t
 * a synonym of struct dog
 * @name: member param
 * @age: member param
 * @owner: member param
 *
 * Return: pointer to type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;

	ptr_dog = malloc(sizeof(dog_t));
	if (!(ptr_dog))
		return (NULL);

	ptr_dog->name = name;
	ptr_dog->age = age;
	ptr_dog->owner = owner;

	return (ptr_dog);

}
