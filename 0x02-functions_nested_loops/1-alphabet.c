#include "main.h"

/**
 *  main - check the code
 *
 * print_alphabet function to dispalay alphabetics .
 * Return: Always 0.
 */

void print_alphabet(void)
{
		char ch;

		for (ch = 97; ch <= 122; ch++)
		{
			_putchar(ch);
		}

			_putchar('\n');
}
