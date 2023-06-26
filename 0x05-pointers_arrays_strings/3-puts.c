#include "main.h"

/**
 * _puts - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
 */

void _puts(char *str)
{
	int k;
	k = 0;

	while (str[k])
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
