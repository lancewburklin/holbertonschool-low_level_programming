#include "holberton.h"

/**
 * cap_string - Capitalize every word
 * @n: The string
 *
 * Return: The new string
 */

char *cap_string(char *n)
{
	int i, x, y;

	for (i = 0; n[i] != '\0'; i++)
	{
		x = (int)n[i];
		if (x > 96 && x < 123)
		{
			if (i = 0)
				n[i] = (char)(x-32);
			y = (int)n[i - 1];
			if (y == 32 || y == 33 || y == 40 || y == 41 || y == 44
			    || y == 46 || y == 59 || y == 63 ||
			    y == 123 || y == 125 || y == 10 || y == 9 ||
			    y == 34)
				n[i] = (char)(x - 32);
		}
	}
	return (n);
}
