#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
	for (c = 1; c <= 9; c++)
	{
		b = (a * c);
	if ((b / 10) > 0)
	{
		_putchar((b / 10) + '0');
	}
	else
	{
		_putchar(' ');
	}
		_putchar((b % 10) + '0');

	if (c < 9)
	{
		_putchar(',');
	      _putchar(' ');
	}
	}
	_putchar('\n');
	}

}
