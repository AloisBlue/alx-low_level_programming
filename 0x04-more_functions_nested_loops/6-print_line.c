#include "main.h"

/**
 * print_line - draw straight line;
 * @n: length
 */
void print_line(int n)
{
	int i;
	char c = '_';

	i = 1;
	n = n + 1;
	while (i < n)
	{
		_putchar('0' + c);
		i++;
	}
	_putchar('\n');
}
