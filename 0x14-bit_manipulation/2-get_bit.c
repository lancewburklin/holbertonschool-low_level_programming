#include "holberton.h"

/**
 * get_bit - FInds the value of an int at an index
 * @n: The value to search through
 * @index: Index to look for
 *
 * Return: The value or -1 on fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 31)
		return (-1);
	n >>= index;
	return (n & mask);
}
