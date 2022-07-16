#include "main.h"

/**
 * print_name - a function that prints a name
 *
 * @name: pointer to the name string
 *
 * @f: pointer to a function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
