#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenate two strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: return pointer to string or null
 */
char *str_concat(char *s1, char *s2)
{
	char *nwstr;
	int len, len1, len2, i = 0, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	len = (len1 + len2);
	nwstr = malloc((sizeof(char) * len) + 1);

	while (i < len1)
	{
		nwstr[i] = s1[i];
		i++;
	}

	j = len1;
	while (j < len)
	{
		nwstr[j] = s2[j - len1];
		j++;
	}

	return (nwstr);
}
