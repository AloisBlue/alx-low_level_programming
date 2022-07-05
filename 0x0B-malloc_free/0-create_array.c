#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates array of chars
 *
 * @size: interger size
 *
 * @c: a character
 *
 * Return: Returns the array pointer
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *str;

	str = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
