#include "main.h"

/**
 * _pow_recursion - calculate value of x raised to power y
 *
 * @x: base
 *
 * @y: power
 *
 * Return: power value
 */
int _pow_recursion(int x, int y)
{
	int pwr;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	pwr = x * (_pow_recursion(x, (y - 1)));
	return (pwr);
}
