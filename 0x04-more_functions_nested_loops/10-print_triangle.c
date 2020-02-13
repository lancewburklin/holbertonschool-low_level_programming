#include "holberton.h"

/**
 * print_triangle - Prints a triangle
 * @size: The size of the triangle
 *
 * Return: Void of all things, like my soul.
 */

void print_triangle(int size)
{
	int x;
	int y;
	int z;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= (size - x); y++)
				_putchar(32);
			for (z = 0; z <= (size - y); z++)
				_putchar(35);
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
