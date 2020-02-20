#include "holberton.h"

/**
 * _strncat - Combines two strings for n bytes
 * @dest: Destination
 * @src: The source
 * @n: Numnber of bytes
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int t = 0;
	int x;

	while (dest[i] != '\0')
		i++;
	while (src[t] != '\0')
		t++;
	if (t < n)
	{
		for (x = 0; x < t; x++)
		{
			dest[i] = src[x];
			i++;
		}
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			dest[i] = src[x];
			i++;
		}
	}
	return (dest);
}
