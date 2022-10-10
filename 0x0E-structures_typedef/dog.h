#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure declaration for dog
 * @name: pointer to string name
 * @age: age member
 * @owner: pointer to string owner
 *
 * Description: This structure consists of three members
 * which give the name, age and owner members with data types.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif