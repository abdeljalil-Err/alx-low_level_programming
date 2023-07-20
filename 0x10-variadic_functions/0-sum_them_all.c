#include "variadic_functions.h"

/**
 * sum_the_all - function return sum of all parameters.
 * @n: amount of the arguments.
 * return: sum of the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	va_list arg;
	unsigned int j;

	if (n == 0)
		return (0);

	va_start(arg, n);

	for (j = 0; j < n; j++)
		result += va_arg(arg, int);

	va_end(arg);

	return (result);
}
