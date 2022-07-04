#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * main - entry point
 *
 * @argc: count of args
 *
 * @argv: array to string of args
 *
 * Return: (0) for success & (1) for error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	size_t j;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < strlen(argv[i]); j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("%s\n", "Error");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	printf("%d\n", 0);
	return (0);
}
