#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring
 * @haystack: What it is searching
 * @needle: What it is searching for
 *
 * Return: Needle location
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int n = 0;
	int a = 0;

	while (needle[a] != '\0')
		a++;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (n = 0; needle[n] != '\0'; n++)
			{
				if (haystack[i + n] == needle[n])
				{
					if (needle[n + 1] == '\0')
						return (haystack + i);
				}
				else
					break;
			}
		}
	}
	if (haystack[i] == needle[n])
		return (haystack);
	else
		return (NULL);
}
