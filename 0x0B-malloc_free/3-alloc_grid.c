#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Makes a two dimensional array
 * @width: Width of the array
 * @height: Height of the array
 *
 * Return: The grid or null
 */

int **alloc_grid(int width, int height)
{
	int **newarray;
	int i, n, c;

	if (width <= 0 || height <= 0)
		return (NULL);
	newarray = malloc(height * sizeof(int *));
	if (newarray == NULL)
		return (NULL);
	for (c = 0; c < height; c++)
	{
		newarray[c] = malloc(width * sizeof(int));
		if (newarray[c] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (n = 0; n < width; n++)
		{
			newarray[i][n] = 0;
		}
	}
	return (newarray);
}
