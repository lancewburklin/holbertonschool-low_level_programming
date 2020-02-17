#include "holberton.h"

/**
 * _strlen - Calculates the length of a string
 * @s: String input
 *
 * Return: The length
 */

int _strlen(char *s)
{
	int x = 0;

	for ( ; s[x] != '\0'; x++)
		x = x;
	return (x);
}
