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

	if (x < 0)
		n = -1 * (x % 10);
	else
		n = x % 10;
	_putchar((n % 10) + '0');

	return (n % 10);
}
