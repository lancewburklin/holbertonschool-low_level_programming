#include "holberton.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: The string to print
 *
 * Return: Returns void
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[i]);
	}
}
