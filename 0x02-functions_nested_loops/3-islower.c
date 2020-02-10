#include "holberton.h"

/**
 * _islower - Checks if it is lower
 * @c: Any input
 *
 * Return: 1 if lower, 0 otherwise
 */

int _islower(int c)
{
	if (c < 123 && c > 96)
		return (1);
	else
		return (0);
}
