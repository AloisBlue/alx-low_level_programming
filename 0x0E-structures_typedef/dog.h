#ifndef DOG_H
#define DOG_H

/**
 * struct dog - shape of dog
 *
 * @age: dog's age
 *
 * @name: dog's name
 *
 * @owner: owner's name
 */
struct dog
{
	float age;
	char *name;
	char *owner;
};

typedef struct dog dog;

#endif
