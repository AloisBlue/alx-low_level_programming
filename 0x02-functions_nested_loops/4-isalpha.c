#include "main.h"

/**
 * _isalpha - check if lower case
 *
 * @c: letter input
 *
 * Return: always 0 for success
*/
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
