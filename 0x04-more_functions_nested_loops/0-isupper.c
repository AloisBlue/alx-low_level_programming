#include "main.h"

/**
 * _isupper - check for uppercase character
 *
 * @c: character argument
 *
 * Return: void
*/
int _isupper(int c)
{
	int i;

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
