#include "main.h"

/**
 * more_numbers - print 0 to 14 10 times
 */
void more_numbers(void)
{
	int i, n;
	char chr;

	i = 0;
	while (i <= 10)
	{
		n = 0;
		while (n <= 14)
		{
			if (n > 9)
			{
				_putchar('1');
				chr = n % 10;
			}
			else
			{
				chr = n;
			}
			_putchar('0' + chr);
			n++;
		}
		_putchar('\n');
		i++;
	}
}
