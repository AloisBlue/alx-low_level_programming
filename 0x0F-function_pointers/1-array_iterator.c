#include "function_pointers.h"

/**
 * array_iterator - executes function as a param on each el of array
 *
 * @array: array provided
 *
 * @size: size of the array
 *
 * @action: pointer to function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action && array)
	{
		i = 0;
		while (i < size)
		{
			action(*(array + i));
			i++;
		}
	}
}
