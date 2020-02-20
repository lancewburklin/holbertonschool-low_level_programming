#include "holberton.h"

/**
  * _strcat - Combines two strings
  * @dest: Destenation
  * @src: The source
  *
  * Return: pointer to dest
  */

char *_strcat(char *dest, char *src)
{
	int i;
	int n;
	int x;

	for (i = 0; dest[i] != '\0'; i++)
		i = i;
	for (n = 0; src[n] != '\0'; n++)
		i = i;
	for (x = 0; x <= n; x++)
	{
		dest[i] = src[x];
		i++;
	}
	return (dest);
}

