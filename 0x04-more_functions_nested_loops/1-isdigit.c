#include "holberton.h"

/**
 * _isdigit - Tests if c is a digit
 * @c: Anything
 *
 * Return: 1 if true, 0 if false
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
