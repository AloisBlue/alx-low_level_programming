#include "hoberton.h"

/**
 * _isupper - check for uppercase character
 *
 * @c: int argument
 *
 * Return: return 0 or 1 based on failure
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}