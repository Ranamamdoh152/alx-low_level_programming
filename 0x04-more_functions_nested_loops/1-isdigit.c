#include "main.h"

/**
 * _isdigit - fun for dig or not
 *
 * @c: char of interest
 *
 * Return: 1 if true 0 oterwize
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
