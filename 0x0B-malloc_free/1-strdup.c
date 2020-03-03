#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Creates a copy of an array
 * @str: The string to copy
 *
 * Return: String to the new array
 */

char *_strdup(char *str)
{
	char *newarray;
	int i = 0;
	int n;

	while (str[i] != '\0')
	{
		i++;
	}
	i++;
	newarray = malloc(i);
	if (newarray == NULL)
		return (NULL);
	for (n = 0; n < i; n++)
		newarray[n] = str[n];
	return (newarray);
}
