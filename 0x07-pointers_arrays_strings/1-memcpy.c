#include "holberton.h"

/**
 * _memcpy - Copies memory
 * @dest: Destination
 * @src: Source to be copied
 * @n: The number of bytes to copy
 *
 * Return: The pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
