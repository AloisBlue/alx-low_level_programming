#ifndef DOG_H
#define DOG_H
#define NULL ((void *)0)

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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
