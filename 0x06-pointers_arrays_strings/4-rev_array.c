#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int l, j, tp;

	for (l = 0; l < n - 1; l++)
	{
		for (j = i + 1; j > 0; j--)
		{
			tp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = tp;
		}
	}
}
