#include "holberton.h"

/**
 * flip_bits - Flips bits to make a new number
 * @n: The number to flip
 * @m: The number to flip to
 *
 * Return: Numbere of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int x = n ^ m;

	while (x)
	{
		count += x & 1;
		x >>= 1;
	}
	return (count);
}
