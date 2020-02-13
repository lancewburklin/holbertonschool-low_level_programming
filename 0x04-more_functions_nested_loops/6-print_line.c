#include "holberton.h"

/**
 * print_line - Prints a line
 * @n: Length of the line
 *
 * Return: That means enter
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			     _putchar(95);
	}
		_putchar('\n');
}
