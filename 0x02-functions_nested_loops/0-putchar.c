#include "main.h"

/**
 * main - main function with a printf
 *
 * Return: always return 0
*/
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
