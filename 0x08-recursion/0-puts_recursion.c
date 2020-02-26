#include "holberton.h"

/**
 * _puts_recursion - Prints out a string
 * @s: The string to be printed
 *
 * Return: Absolutely nothing
 */

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
