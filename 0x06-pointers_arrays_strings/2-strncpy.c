#include "holberton.h"

/**
 * _strncpy - Copies a string
 * @dest: Destination
 * @src: string to be copied
 * @n: Length of the copy
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
