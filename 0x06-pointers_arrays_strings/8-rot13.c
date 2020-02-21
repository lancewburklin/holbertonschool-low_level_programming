#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @s: This is any input
 *
 * Return: The encoded string
 */

char *rot13(char *s)
{
	int i;
	int n;
	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char z[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

		for (i = 0; s[i] != '\0'; i++)
		{
			for (n = 0; x[n] != '\0'; n++)
			{
				if (s[i] == x[n])
				{
					s[i] = z[n];
					break;
				}
			}
		}
	return (s);
}
