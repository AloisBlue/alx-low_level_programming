#include "3-calc.h"

/**
 * op_add - add two numbers
 *
 * @a: operand 1
 *
 * @b: operand 2
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 *
 * @a: operand 1
 *
 * @b: operand 2
 *
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -multiply two numbers
 *
 * @a: operand 1
 *
 * @b: operand 2
 *
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers
 *
 * @a: operand 1
 *
 * @b: operand 2
 *
 * Return: division
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus from numbers
 *
 * @a: operand 1
 *
 * @b: operand 2
 *
 * Return: modulus remainder
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	return (a % b);
}
