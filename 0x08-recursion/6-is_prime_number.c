#include "main.h"

/**
 * _prime - bool prime
 *
 * @n: params
 *
 * @i: params
 *
 * Return: bool
 */
int _prime(int n, int i)
{
	if (i % n == 0)
	{
		return (0);
	}
	else if (i / 2 > n)
	{
		return (_prime(n + 2, i));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - find prime condition
 *
 * @n: integer params
 *
 * Return: prime codition
 */
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (_prime(3, n));
	}
}
