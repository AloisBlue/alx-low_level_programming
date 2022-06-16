#include "main.h"

/**
 * _strcmp - compare two strings
 *
 * @s1: first input
 *
 * @s2: second input
 *
 * Return: count
*/
int _strcmp(char *s1, char *s2)
{
	int i, dfrn;

	for (i = 0; s1[i] != '\0'; ++i)
	{
		if (s1[i] > s2[i])
		{
			dfrn = s1[i] - s2[i];
			return (dfrn);
		}
		else if (s1[i] < s2[i])
		{
			dfrn = s1[i] - s2[i];
			return (dfrn);
		}
	}
	return (0);
}
