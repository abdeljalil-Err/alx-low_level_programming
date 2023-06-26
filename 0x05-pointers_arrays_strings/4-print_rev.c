#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */

void print_rev(char *s)
{
	int i;
	int stg;
	
	stg = 0;
	for (i = 0; s[stg] != '\0'; i++)
	{
		stg++;
	}

	for (i = stg - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	
	_putchar('\n');
}
