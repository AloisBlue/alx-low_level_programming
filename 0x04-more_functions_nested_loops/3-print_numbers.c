#include "main.h"

/**
 * print_numbers - prints all digits
 *
 * Return: void
 */
void print_numbers(void)
{
	char n;
	
	n = '0';
	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
