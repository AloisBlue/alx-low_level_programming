#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	char lchr;
	char uchr;

	for (lchr = 'a'; lchr <= 'z'; lchr++)
	{
		putchar(lchr);
	}
	for (uchr = 'A'; uchr <= 'Z'; uchr++)
	{
		putchar(uchr);
	}
	putchar('\n');
	return (0);
}
