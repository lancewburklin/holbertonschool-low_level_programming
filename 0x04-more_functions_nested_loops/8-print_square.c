#include "holberton.h"

/**
 * print_square - Prints a square
 * @size: Size of the square
 *
 * Return: To Hell
 */

void print_square(int size)
{
	int i;
	int n;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (n = 0; n < size; n++)
				_putchar(35);
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
