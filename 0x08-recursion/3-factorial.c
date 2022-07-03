#include "main.h"

/**
 * factorial - calculate factorial of a number
 *
 * @n: number param
 *
 * Return: factorial of the number
 */
int factorial(int n)
{
	int i;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	i = (n * factorial(n - 1));
	return (i);
}
