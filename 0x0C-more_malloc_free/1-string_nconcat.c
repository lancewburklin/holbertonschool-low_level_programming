#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Finds the string length
 * @s: string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * string_nconcat - Concat a string for n bytes
 * @s1: String to copy to
 * @s2: String to copy
 * @n: Length to copy from to
 *
 * Return: The string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, s1l;
	unsigned int c, s2l;
	char *newarray;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1l = _strlen(s1);
	s2l = _strlen(s2);
	if (n >= s2l)
		n = s2l;
	newarray = malloc(s1l + n + 1);
	for (i = 0; i < s1l; i++)
	{
		newarray[i] = s1[i];
	}
	for (c = 0; c < n; c++, i++)
		newarray[i] = s2[c];
	newarray[i] = '\0';
	return (newarray);
}
