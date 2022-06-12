#include "main.h"

/**
 * _islower - check if lower case
 *
 * @c: letter input
 *
 * Return: always 0 for success
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
