#include "holberton.h"

/**
 * print_diagonal - Prints a diagonal line
 * @n: Length of the line
 *
 * Return: What war is good for
 */

void print_diagonal(int n)
{
	int x;
	int y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			_putchar(32);
			_putchar(92);
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
