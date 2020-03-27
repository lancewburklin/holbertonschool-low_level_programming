#include "holberton.h"

/**
 * set_bit - Sets a bit at an index
 * @n: Number to look through
 * @index: Index to look for
 *
 * Return: The new number
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 31)
		return (-1);
	mask = mask << index;
	*n = *n | mask;

	return (1);
}
