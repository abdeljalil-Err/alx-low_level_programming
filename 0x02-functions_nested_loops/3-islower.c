#include "main.h"

/**
 * _islower - checks for lowercase character.
 * c variable  type int is the character check.
 * Return: 1 islower 0 isn't islower.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
