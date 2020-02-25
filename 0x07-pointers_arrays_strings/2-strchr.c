#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - Searches a string
 * @s: The pointer to the destination
 * @c: The character searched for
 *
 * Return: The string
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
