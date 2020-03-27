#include "holberton.h"

/**
 * clear_bit - Clears a bit at index
 * @n: The number to change
 * @index: The byte to change
 *
 * Return: 1 on success, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 31)
		return (-1);

	mask = mask << index;
	*n = *n & ~mask;

	return (1);
}
