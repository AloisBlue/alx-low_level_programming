#include "main.h"

/**
 * _abs - computer absolute value
 *
 * @ab: input
 *
 * Return: value of ab (absolute)
*/
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
