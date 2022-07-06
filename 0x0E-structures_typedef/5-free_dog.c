#include <stdlib.h>
#include "main.h"
#include "dog.h"

/**
 * free_dog - frees the dog :)
 *
 * @d: pointer to dog struct
 */
void free_dog(dog_t *d)
{
	free(d);
}
