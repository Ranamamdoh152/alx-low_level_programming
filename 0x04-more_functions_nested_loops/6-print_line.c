#include "main.h"

/**
 * print_line - fun that prints a line
 *
 * @n: length of the line
 *
 * Return: then line
 */

void print_line(int n)
{
	int j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
