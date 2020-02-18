#include "holberton.h"

/**
 * print_rev - Prints a tring in reverse
 * @s: The string
 *
 * Return: NEGATIVE
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;
	for (x = x - 1; x >= 0; x--)
		_putchar(s[x]);
	_putchar(10);
}
