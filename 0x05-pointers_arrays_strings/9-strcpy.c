#include "holberton.h"

/**
 * _strcpy - Copies the string
 * @dest: Destination to copy
 * @src: Source to copy
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
