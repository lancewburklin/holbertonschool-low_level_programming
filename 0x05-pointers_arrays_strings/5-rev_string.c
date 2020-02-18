#include "holberton.h"

/**
 * rev_string - Prints a tring in reverse
 * @s: The string
 *
 * Return: NEGATIVE
 */

void rev_string(char *s)
{
	int x = 0;
	int i = 0;

	while (s[x] != '\0')
		x++;
	while (--x > i)
	{
		char first = s[i];
		char second = s[x];

		s[i++] = second;
		s[x] = first;
	}
}
