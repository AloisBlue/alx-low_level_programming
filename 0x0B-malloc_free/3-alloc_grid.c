#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - create 2d array
 *
 * @width: rows
 *
 * @height: columns
 *
 * Return: returns array or null
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;

	if (width == 0 || height == 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == 0)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
	}

	if (arr == NULL)
		free(arr);
		return (NULL);

	return (arr);
}
