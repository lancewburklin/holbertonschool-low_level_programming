#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Takes arguments and makes them strings
 * @ac: Amount of arguments
 * @av: Pointer to an array of arguments
 *
 * Return: The output
 */

char *argstostr(int ac, char **av)
{
	char *newarray;
	int i, n = 0, j, newlen = 0, len = 0, full_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (n < ac)
	{
		full_len = full_len + _strlen(av[n]) + 1;
		n++;
	}
	full_len++;
	newarray = malloc(full_len + 1);
	if (newarray == NULL)
	{
		free(newarray);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		newlen = _strlen(av[i]);
		for (j = 0; j < newlen; j++, len++)
			newarray[len] = av[i][j];
		newarray[len++] = '\n';
	}
	newarray[len] = '\0';
	return (newarray);
}

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
