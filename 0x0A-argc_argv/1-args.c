#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * @argc: count to the args
 *
 * @argv: pointer to string of args
 *
 * Return: returns (0) always success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
