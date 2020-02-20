#include "holberton.h"

/**
 * string_toupper - Changes letters to uppercase
 * @n: The string
 *
 * Return: The pointer to the string
 */

char *string_toupper(char *n)
{
	int i;
	int x;

	for (i = 0; n[i] != '\0'; i++)
	{
		x = (int)n[i];
		if (x > 96 && x < 123)
			n[i] = (char)(x - 32);
	}
	return (n);
}
