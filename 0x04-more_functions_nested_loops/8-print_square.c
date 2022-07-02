#include "main.h"

/**
 * print_square - print squares
 *
 * @size: length of square
 */
void print_square(int size)
{
	int i, j;

	i = 0;
	if (size < 1)
		 _putchar('\n');
	while (i < size)
	{	
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;	
	}
}
