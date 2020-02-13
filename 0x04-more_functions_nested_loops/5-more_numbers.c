#include "holberton.h"

/**
 * more_numbers - Prints more numbers!
 *
 * Return: Void
 */

void more_numbers(void)
{
	int z;
	int i;
	int a = 48;
	int b = 48;
	int c = 0;

	for (z = 0; z < 10; z++)
	{
		a = 48;
		b = 48;
		c = 0;
	for (i = 0; i < 15; i++)
	{
		_putchar(a);
		if (c == 1)
		{
			_putchar(b);
				b++;
		}
		if (a == 57)
		{
			a = 49;
			c = 1;
		}
		if (c == 0)
			a++;
	}
	_putchar(10);
	}
}
