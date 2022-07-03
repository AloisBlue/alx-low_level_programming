#include "main.h"

/**
 * _sqrt_recursion - calculate natural square root
 *
 * @n: provided number
 *
 * Return: return square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - looks for sqrt
 *
 * @n: square params
 *
 * @i: possible root
 *
 * Return: return sqrt
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	i++;
	return (_sqrt(n, i));
}
