#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	int dgt = 0;
	char ltr;

	while (dgt < 10)
	{
		putchar('0' + dgt);
		dgt++;
	}
	for (ltr = 'a'; ltr <= 'f'; ltr++)
	{
		putchar(ltr);
	}
	putchar('\n');
	return (0);
}
