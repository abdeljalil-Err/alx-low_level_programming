#include "main.h"



/**
 * _isalpha - Check Main
 * @c: variable character input .
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */

	int _isalpha(int c)
	{


		if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		{
			return (1);
		}

		return (0);

	}

