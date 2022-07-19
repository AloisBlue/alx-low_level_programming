#include "variadic_functions.h"

/**
 * print_strings - print string followed by line
 *
 * @separator: string separator
 *
 * @n: number of args
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s%s", str, (separator && i < (n - 1)) ? separator : "");
	}
	va_end(ap);
	printf("\n");
}
