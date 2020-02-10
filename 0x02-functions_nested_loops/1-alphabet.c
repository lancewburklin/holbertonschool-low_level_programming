#include "holberton.h"

/**
 * void - Print the lowercase alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int x;

	for (x = 97; x < 123; x++)
		_putchar(x);
	_putchar(10);
}
