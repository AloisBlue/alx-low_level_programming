#include "main.h"

/**
 * _isupper - check for uppercase character
 *
 * @c: int argument
 *
 * Return: return 0 or 1 based on failure
*/
int _isupper(int c)
{
	int i;

	if (c >= 65 && c <= 90)
		i = 1;
	else
		i = 0;
	return (i);
}
