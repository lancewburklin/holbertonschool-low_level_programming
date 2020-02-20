#include "holberton.h"

/**
 * _strcmp - Compares two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: The comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int x;
	int n = 0;
	int a;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			x = (int)s1[i];
			a = (int)s2[i];
			n = n + (x - a);
			break;
		}
		i++;
	}
	return (n);
}
