#include "main.h"

/**
 * _strlen - return lenght of a sreing.
 * @s: parametre input.
 * return: lenght of string.
 */

int _strlen(char *s)
{
	int i = 0;
	for (*(s + i) != '\0';)
	{
		i++;
	}
	return (i);
}
