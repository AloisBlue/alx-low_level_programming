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
	int i, len;
	char *str;

	len = (int)size;
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		str[i] = c;
	}
	return (str);
}
