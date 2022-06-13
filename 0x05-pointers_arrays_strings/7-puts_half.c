#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - print half of a string
 * @str: string variable
*/
void puts_half(char *str)
{
	int i = 0, n;
	int len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	if ((len % 2) == 0)
		n = (len / 2);
	else
		n = ((len + 1) / 2);

	i = n;
	while (i <= len)
	{
		putchar(str[i]);
		i++;
	}
	puts("");
}
