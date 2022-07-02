#include "main.h"

/**
 * print_diagonal - draw diagonal line on the terminal
 *
 * @n: the height of line
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;
	if (n < 1)
		_putchar('\n');
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
