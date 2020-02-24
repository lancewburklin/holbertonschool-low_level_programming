#include "holberton.h"

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
	int a = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c && a != 1)
		{
			a = 1;
			return (&s[i]);
		}
	}
	return (0);
}
