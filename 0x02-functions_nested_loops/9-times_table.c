#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			if (j == 9)
			{
				if (product < 10)
					printf(" %d\n", product);
				else
					printf("%d\n", product);
			}
			else
			{
				if (product < 10)
					printf(" %d, ", product);
				else
					printf("%d, ", product);
			}
		}
	}
}
