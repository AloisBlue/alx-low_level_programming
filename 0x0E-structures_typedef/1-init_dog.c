#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize struct dog
 *
 * @d: struct of the dog
 *
 * @name: name of dog
 *
 * @age: age of dog
 *
 * @owner: owner of dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).age = age;
		(*d).name = name;
		(*d).owner = owner;
	}
}
