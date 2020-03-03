#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Combines two strings
 * @s1: String one
 * @s2: String two
 *
 * Return: New string
 */

char *str_concat(char *s1, char *s2)
{
	char *newarray;
	int i = 0;
	int n = 0;
	int c, e, d;

	while (s1[i] != '\0')
		i++;
	i++;
	while (s2[n] != '\0')
		n++;
	d = i + n;
	newarray = malloc(d);
	if (newarray == NULL)
		return (NULL);
	for (c = 0; s1[c] != '\0'; c++)
		newarray[c] = s1[c];
	for (e = 0; s2[e] != '\0'; e++)
	{
		newarray[c] = s2[e];
		c++;
	}
	newarray[c] = '\0';
	return (newarray);
}
