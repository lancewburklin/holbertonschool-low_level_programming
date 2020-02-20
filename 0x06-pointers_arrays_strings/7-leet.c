#include "holberton.h"

/**
 * leet - Translates to 1337
 * @s: The translation
 *
 * Return: New translation
 */

char *leet(char *s)
{
	char ori[20] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char new[20] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i;
	int x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; ori[x] != '\0'; x++)
		{
			if (s[i] == ori[x])
				s[i] = new[x];
		}
	}
	return (s);
}
