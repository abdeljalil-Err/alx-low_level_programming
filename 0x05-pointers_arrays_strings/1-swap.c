#include "main.h"

/**
 * this function that swaps the values of two integers.
 * @a : - pionter integer type.
 * @b : - pointer integer type.
 */

void swap_int(int *a, int *b)
{
	int s;
	s = *b;
	*b = *a;
	*a = s;
}
