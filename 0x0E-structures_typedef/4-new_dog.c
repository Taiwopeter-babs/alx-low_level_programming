#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - calculates the length of string in bytes
 * @s: paramter to be evaluated
 * Return: nothing
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * new_dog - function creates an instance of dog_t
 * a synonym of struct dog
 * @name: member param
 * @age: member param
 * @owner: member param
 * Return: pointer to type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, name_len, owner_len;
	dog_t *ptr_dog;

	ptr_dog = malloc(sizeof(dog_t));
	if (ptr_dog == NULL)
	{
		free(ptr_dog);
		return (NULL);
	}
	/* get the length of name & owner members */
	name_len = _strlen(name) + 1;
	owner_len = _strlen(owner) + 1;

	ptr_dog->name = malloc(sizeof(char) * name_len);
	if (ptr_dog->name == NULL)
	{
		free(ptr_dog->name);
		free(ptr_dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		ptr_dog->name[i] = name[i];

	/* initialize the age of the dog */
	ptr_dog->age = age;
	/* alloc memory and copy the string to memory - ln 64 */
	ptr_dog->owner = malloc(sizeof(char) * owner_len);
	if (ptr_dog->owner == NULL)
	{
		free(ptr_dog->name);
		free(ptr_dog->owner);
		free(ptr_dog);
		return (NULL);
	}

	for (i = 0; i < owner_len; i++)
		ptr_dog->owner[i] = owner[i];

	return (ptr_dog);
}
