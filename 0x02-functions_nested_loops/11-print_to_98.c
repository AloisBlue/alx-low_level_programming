#include <stdio.h>
#include "main.h"

void print_to_98(int n)
{
	int i;

	for (i = n; i =< 98; i++)
	{
		if (i == 98)
			printf("%d\n", i);
		else
			printf("%d, ", i);
	}
}