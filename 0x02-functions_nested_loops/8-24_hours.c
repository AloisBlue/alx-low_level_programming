#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - print every minuter of the day
 */
void jack_bauer(void)
{
	int i, j, k;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				if (i < 10)
				{
					_putchar(k);
					_putchar(i);
					_putchar(':');
					_putchar(k);
					_putchar(j);
					_putchar('\n');
				}
				else
				{
					_putchar(k);
					_putchar(i);
					_putchar(':');
					_putchar(j);
					_putchar('\n');
				}
			}
			else
			{
				if (j < 10)
				{
					_putchar(i);
					_putchar(':');
					_putchar(k);
					_putchar(j);
					_putchar('\n');
				}
				else
				{
					_putchar(i);
					_putchar(':');
					_putchar(j);
					_putchar('\n');
				}
			}
		}
	}
}
