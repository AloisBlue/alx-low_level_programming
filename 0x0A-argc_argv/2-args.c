#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * @argc: count of args
 *
 * @argv: pointer to array of string args
 *
 * Return: always returns (0) success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
