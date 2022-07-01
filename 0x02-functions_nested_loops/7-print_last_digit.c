#include "main.h"

/**
 * print_last_digit - prints last digit
 * @ld: interger
 * Return: Returns the last digit
 */
int print_last_digit(int ld)
{
	int i;

	i = ld % 10;
	if (i < 0)
	{
		i = -i;
	}
	_putchar('0' + i);
	return (i);
}
