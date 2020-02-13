#include "holberton.h"

/**
 * _isupper - Tests if a letter is uppercase
 * @c: Any letter
 *
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else if (c > 96 && c < 123)
		return (0);
	else
		return (0);
}
