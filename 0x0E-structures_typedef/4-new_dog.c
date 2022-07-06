#include <stdlib.h>
#include "main.h"
#include "dog.h"

/**
 * *new_dog - create a new dog
 *
 * @name: pointer to dog's name
 *
 * @age: dog's age
 *
 * @owner: pointer to dog's dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(*d));
	if (d == NULL)
		return (NULL);
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

	return (d);
}
