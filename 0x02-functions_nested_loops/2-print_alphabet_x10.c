#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabe
 */



	void print_alphabet_x10(void)
	{
		char ch;
		int j;


		for (j = 0; j <= 9; j++)
		{

			for (ch = 97; ch <= 122; ch++)
			{
				_putchar(ch);
			}

				_putchar('\n');

		}

	}


