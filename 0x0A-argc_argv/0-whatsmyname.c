#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * @argc: count of args
 *
 * @argv: pointer to array of strings args
 *
 * Return: always zero for success
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
