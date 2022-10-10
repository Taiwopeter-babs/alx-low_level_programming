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
	unsigned int i, name_len, owner_len;
	dog_t *ptr_dog;

	ptr_dog = malloc(sizeof(dog_t));
	if (ptr_dog == NULL || !(name) || !(owner))
	{
		free(ptr_dog);
		return (NULL);
	}
	/**
	 * get the length of the string, then allocate memory to store string
	 * Parse each char to the alloc memory space to store in memory + '\0'
	 */
	for (name_len = 0; name[name_len] != '\0'; name_len++)
		;

	ptr_dog->name = malloc(sizeof(char) * (name_len + 1));
	if (!(ptr_dog->name))
	{
		free(ptr_dog);
		free(ptr_dog->name);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		ptr_dog->name[i] = name[i];
	ptr_dog->name[i] = '\0';

	/* initialize the age of the dog */
	if (ptr_dog->age)
		ptr_dog->age = age;

	/* See ptr_dog->name for explanation */
	for (owner_len = 0; owner[owner_len] != '\0'; owner_len++)
		;

	ptr_dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (!(ptr_dog->owner))
	{
		free(ptr_dog->owner);
		free(ptr_dog);
		return (NULL);
	}
	for (i = 0; i < owner_len; i++)
		ptr_dog->owner[i] = owner[i];
	 ptr_dog->owner[i] = '\0';

	return (ptr_dog);
}