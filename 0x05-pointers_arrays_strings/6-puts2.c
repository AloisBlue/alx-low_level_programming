#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - print every other character
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((i % 2) == 0)
		{
			putchar(str[i]);
		}
		i++;
	}
	puts("");
}
