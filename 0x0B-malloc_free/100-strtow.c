#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Length of a string
 * @s: The string
 *
 * Return: Length of a string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * strtow - Puts wors in a string into an array
 * @str: The string
 *
 * Return: Pointer to the string
 */

char **strtow(char *str)
{
	char **newarray;
	int i, x, d = 0, n = 0, len = 0, flag = 0, new_len = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			flag = 0;
		if (str[i] != ' ' && flag == 0)
		{
			len += 1;
			flag = 1;
		}
	}
	len++;
	newarray = malloc(len * sizeof(char *));
	if (newarray == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		new_len = 0;
		for (n = 0; str[n] != ' ' && str[n] != '\0'; n++)
		{
			new_len += 1;
			printf("%c", str[n]);
		}
		if (new_len != 0)
		{
			new_len++;
		newarray[flag] = malloc(new_len);
		if (newarray[flag] == NULL)
		{
			for (; flag >= 0; flag--)
				free(newarray[flag]);
			free(newarray);
			return (NULL);
		}
		for (x = 0; x < n; x++)
			str[x] = newarray[d][x];
		newarray[d][x] = '\0';
		d++;
		flag++;
		if (n != '0')
			i = n;
		}
	}
	newarray[flag] = '\0';
	return (newarray);
}
