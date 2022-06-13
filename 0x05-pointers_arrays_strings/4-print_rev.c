#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 *
 * @s: string variable
*/
void print_rev(char *s)
{
	char *t = s + strlen(s) - 1;

	while (t >= s)
	{
		putchar(*t);
		t = t - 1;
	}
	puts("");
}
