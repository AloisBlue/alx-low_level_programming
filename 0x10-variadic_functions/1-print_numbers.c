#include "variadic_functions.h"

/**
 * print_numbers - print numbers followed by a new line
 *
 * @separator: separator for numbers
 *
 * @n: length of numbers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		printf("%d%s", va_arg(x, int), (separator && i != n - 1) ? separator : "");
		i++;
	}
	va_end(ap);
	printf("\n");
}
