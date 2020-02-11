#include "holberton.h"

/**
 * _abs - Print absolute value
 * @x: This is any value
 *
 * Return: 0
 */

int _abs(int x)
{
	if (x < 0)
		return (-x);
	else if (x >= 0)
		return (x);
	else
		return (0);
}
