#include "holberton.h"

/**
 * jack_bauer - Print every minute
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int x;
	int y;
	int z;
	int zz;

	for (x = 48; x < 51; x++)
	{
		for (y = 48; y < 52; y++)
		{
			for (z = 48; z < 54; z++)
			{
				for (zz = 48; zz < 58; zz++)
				{
					_putchar(x);
					_putchar(y);
					_putchar(58);
					_putchar(z);
					_putchar(zz);
					_putchar(10);
				}
			}
		}
	}
}
