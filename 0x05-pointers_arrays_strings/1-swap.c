#include "main.h"

/**
 * swap_int - swap values of two intergers
 *
 * @a: points to a
 *
 * @b: points to b
*/
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
