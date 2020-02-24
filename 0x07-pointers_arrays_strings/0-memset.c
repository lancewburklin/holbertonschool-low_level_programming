#include "holberton.h"

/**
 * _memset - Fills memory with a byte
 * @s: The pointer to the memory to fill
 * @b: The constant
 * @n: The number of bytes to fill
 *
 * Return: The pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
