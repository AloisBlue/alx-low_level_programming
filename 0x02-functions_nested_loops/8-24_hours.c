#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - print every minuter of the day
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				if (j < 10)
				{
					printf("0%d:0%d\n", i, j);
				}
				else
				{
					printf("0%d:%d\n", i, j);
				}
			}
			else
			{
				if (j < 10)
				{
					printf("%d:0%d\n", i, j);
				}
				else
				{
					printf("%d:%d\n", i, j);
				}
			}
		}
	}
}
