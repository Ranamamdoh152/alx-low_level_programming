#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always void (Success)
 */

void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (char c = 'a'; c <= 'z'; ++c)
		{
			_putchar(c)
		}
		_putchar('\n')
	}
}
