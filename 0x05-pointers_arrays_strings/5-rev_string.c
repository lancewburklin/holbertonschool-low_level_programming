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
	int n[98];

	while (s[x] != '\0')
		x++;
	x--;
	for (x = x; x >= 0; x--)
	{
		n[i] = s[x];
		i++;
	}
	for (x = 0; s[x] != '\0'; x++)
		s[x] = n[x];
}
