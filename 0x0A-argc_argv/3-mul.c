#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: count to the args
 *
 * @argv: pointer to the array of strings args
 *
 * Return: returns (0) for success or (1) for error
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
		return (0);
	}
	printf("%s\n", "Error");
	return (1);
}
