#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int counter = 0, m, n;
	char *stg, revrs;

	while (counter >= 0)
	{
		if (s[counter] == '\0')
			break;
		counter++;
	}
	stg = s;

	for (m = 0; m < (counter - 1); m++)
	{
		for (n = m + 1; n > 0; n--)
		{
			revrs = *(stg + n);
			*(stg + n) = *(stg + (n - 1));
			*(stg + (n - 1)) = revrs;
		}
	}
}
