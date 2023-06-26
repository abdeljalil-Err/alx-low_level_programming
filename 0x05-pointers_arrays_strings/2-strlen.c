#include "main.h"

/**
 * _strlen - return lenght of a string.
 * @s: parametre input.
 * return: length of string.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0';)
	{
		i++;
	}
	return (i);
}
