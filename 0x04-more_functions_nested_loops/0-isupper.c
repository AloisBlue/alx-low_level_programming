#include <ctype.h>

/**
 * _isupper - check for uppercase character
 *
 * @c: this is a character argument
 *
 * Return: return 0 or 1
*/
int _isupper(char c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
