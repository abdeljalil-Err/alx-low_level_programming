#include "main.h"
/**
 * print_last_digit - Check Main.
 * @r: variable type  integer input.
 * Description: function print the last digit of a number
 * Return: last digit of number r.
 */
int print_last_digit(int r)
{
	int x;

	if (r < 0)
		x = -1 * (r % 10);
	else
		x = r % 10;
	_putchar((x % 10) + '0');

	return (x % 10);
}
