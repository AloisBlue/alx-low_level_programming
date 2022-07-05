#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - return pointer to newly allocated space
 *
 * @str: pointer to string
 *
 * Return: pointer to new string or null
 */
char *_strdup(char *str)
{
	char *dupstr;
	int len, i;

	len = strlen(str);
	i = 0;

	if (str == NULL)
		return (NULL);

	dupstr = malloc((sizeof(char) * len) + 1);

	if (!dupstr)
		return (NULL);

	while (i < len)
	{
		dupstr[i] = str[i];
		i++;
	}

	return (dupstr);
}
