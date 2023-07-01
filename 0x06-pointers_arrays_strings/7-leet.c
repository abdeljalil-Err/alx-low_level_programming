#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */

char *leet(char *s)
{
	int counter = 0, j;
	int lows_letters[] = {97, 101, 111, 116, 108};
	int up_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + counter) != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + counter) == lows_letters[j] || *(s + counter) == up_letters[j])
			{
				*(s + counter) = numbers[j];
				break;
			}
		}
		counter++;
	}

	return (s);
}
