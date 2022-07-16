#include "function_poiners.h"

/**
 * int_index - function that searches an interger
 *
 * @array: array provided
 *
 * @size: number of elements in array
 *
 * @cmp: pointer to fn to be used to compare values
 *
 * Return: 0 or -1 based on search
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		i = 0;
		while (i < size)
		{
			if ((*(array + i)) != 0)
				return (i);
			else
				return (-1);
			i++;
		}
	}
}
