#include "main.h"

/**
 * _strlen_recursion - return length of string
 *
 * @s: pointer to string s
 *
 * Return: length of string;
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return (0);
	}
	i = (1 + _strlen_recursion(++s));
	return (i);
}
