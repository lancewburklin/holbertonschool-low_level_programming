#include "holberton.h"

/**
 * _strpbrk - Locates part of a string
 * @s: What it searches through
 * @accept: What it is searching for
 *
 * Return: Pointer to what it finds
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
				return (&s[i]);
		}
	}
	return (0);
}
