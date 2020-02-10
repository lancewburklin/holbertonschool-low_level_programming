#include "holberton.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - Checks if it is lower
 * @c: Any input
 *
 * Return: 1 if lower, 0 otherwise
 */

int _islower(int c)
{
	if (isupper(c))
		return (0);
	else
		return (1);
}
