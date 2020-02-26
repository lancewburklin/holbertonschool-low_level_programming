#include "holberton.h"

/**
 * _pow_recursion - Returns a number to a power
 * @x: The base
 * @y: The power
 *
 * Return: base to power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		x = -1;
	else if (y == 0)
		x = 1;
	else
	{
		x = x * _pow_recursion(x, y - 1);
		return (x);
	}
	return (x);
}
