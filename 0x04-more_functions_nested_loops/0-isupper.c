#include "hoberton.h"
#include <stdio.h>

/**
 * _isupper - check for uppercase character
 *
 * @c: this is a character argument
 *
 * Return: return 0 always
*/
int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
