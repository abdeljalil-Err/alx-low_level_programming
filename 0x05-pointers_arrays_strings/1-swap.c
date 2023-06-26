#include "main.h"

/**
 * this function swap_int that swaps the values of two integers.
 * @a :  pionter integer type to swap.
 * @b :  pointer integer type to swap.
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *b;
	*b = *a;
	*a = s;
}
