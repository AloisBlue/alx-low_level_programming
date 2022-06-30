#include "main.h"

/**
 * _strspn - find length of original string
 *
 * @s: input string
 *
 * @accept: accepted word
 *
 * Return: length of prefix
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				break;
			}
		j++;
		}
		if (!accept[j])
		{
			break;
		}
	i++;
	}
	return (i);
}
