#include "holberton.h"

/**
 * _puts_recursion - Prints out a string
 * @s: The string to be printed
 *
 * Return: Absolutely nothing
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar(10);
}
