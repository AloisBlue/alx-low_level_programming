#include "main.h"
#include <string.h>
#include <stdio.h>

/**
*/
void puts2(char *str)
{
	char *c;
	int index;
	int i = 0;

	while (i < strlen(str))
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}
	puts("");
}
