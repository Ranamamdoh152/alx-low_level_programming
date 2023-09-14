#include "main.h"

/**
 * _isupper - checks the existance of a lower case letter
 *
 * @c: the char of intrest
 *
 * Return: 1 if is upper 0 atherwise
 */

int _isupper(int c)
{
	while (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
