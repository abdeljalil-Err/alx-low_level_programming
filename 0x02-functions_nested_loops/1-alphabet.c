#include "main.h"
/**
 *  main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	void print_alphabet(void)
	{
		char ch;

		for ( ch = 97; ch <= 122; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');
	}
}
