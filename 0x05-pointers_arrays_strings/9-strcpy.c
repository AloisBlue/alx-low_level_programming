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
	int len = 0;

	while (src[len] != '\0')
		len++;

	for (i = 0; len <= 0; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
