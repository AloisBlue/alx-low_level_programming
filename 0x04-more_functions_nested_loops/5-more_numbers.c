#include "main.h"

/**
 * more_numbers - print 0 to 14 10 times
 */
void more_numbers(void)
{
	int i, n;
	
	i = 0;
	while (i <= 10)
	{	
		n = 0;
		while (n <= 14)
		{
			_putchar('0' + n);
			n++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
