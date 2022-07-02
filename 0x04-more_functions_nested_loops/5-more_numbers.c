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
			_putchar(n % 10 + '0');
			n++;
		}
		_putchar('\n');
		i++;
	}
}
