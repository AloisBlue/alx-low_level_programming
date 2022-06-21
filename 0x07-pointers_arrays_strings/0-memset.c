#include "main.h"
#include <stdio.h>

/**
 * *_memset - fill memory with a constant byte
 *
 * @s: pointer to s
 *
 * @b: char of b
 *
 * @n: the first n positions
 *
 * Return: the pointer to memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int p;

	p = &s;

	memset(p, b, n);
	return (*p);
}
