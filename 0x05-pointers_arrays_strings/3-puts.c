#include "holberton.h"

/**
 * _puts - Prints a string
 * @str: The string to put
 *
 * Return: Void
 */

void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar(10);
}
