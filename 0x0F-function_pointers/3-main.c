#include "3-calc.h"

/**
 * main - entry point
 *
 * @argc: number of arguments
 *
 * @argv: array of arguements
 *
 * Return: 0 or 1 based on success
 */
int main(int argc, char *argv[])
{
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	ptr = get_op_func(argv[2]);
	if (!ptr)
	{
		printf("%s\n", "Error");
		exit(99);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
