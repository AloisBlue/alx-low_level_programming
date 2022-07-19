#include "variadic_functions.h"

/**
 * sum_them_all - sum all the parameters
 *
 * @n: first arguements
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start(ap, n);
	i = 0;
	sum = 0;

	if (n == 0)
		return (0);

	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	return (sum);
}
