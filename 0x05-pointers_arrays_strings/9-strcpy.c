#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by src
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: string
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (1 = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
