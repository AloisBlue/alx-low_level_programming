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
	dog_t *new_dg;

	new_dg = malloc(sizeof(*new_dg));
	if (new_dg == NULL)
		return (NULL);
	(*new_dg).name = name;
	(*new_dg).age = age;
	(*new_dg).owner = owner;

	return (new_dg);
}
