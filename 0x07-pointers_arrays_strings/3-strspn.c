#include "holberton.h"

/**
 * _strspn - Gets the ammount of matching characters
 * @s: The string
 * @accept: Accepted letters
 *
 * Return: The accepted letter amount
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int n;
	int num = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				num++;
			}
		}
	}
	return (num);
}

