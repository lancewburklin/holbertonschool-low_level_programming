#include "holberton.h"

/**
 * _isalpha - Checks if it's a letter
 * @c: Any input
 *
 * Return: Depends
 */

int _isalpha(int c)
{
	if (c < 91 && c > 64)
		return (1);
	else if (c < 123 && c > 96)
		return (1);
	else
		return (0);
}
