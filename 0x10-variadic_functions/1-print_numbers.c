#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int j;
	
	va_start(arg, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(arg, int));
		if (separator && j < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(arg);
}
