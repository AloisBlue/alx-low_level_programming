#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - print half of a string
 * @str: string variable
*/
void puts_half(char *str)
{
	int i = strlen(str) / 2;

	while (i < strlen(str))
	{
		putchar(str[i]);
		i++;
	}
	puts("");
}
