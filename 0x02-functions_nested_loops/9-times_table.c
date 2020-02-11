#include "holberton.h"

/**
 * times_table - Prints a times table
 *
 * Return: Always 0
 */

void times_table(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			int mult = x * y;
			int testnum = ((y + 1) * x);

			if (mult >= 10)
				_putchar(mult / 10 + '0');
			_putchar(mult % 10 + '0');
			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (mult < 10 && y != 9 && testnum < 10)
			{
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}
