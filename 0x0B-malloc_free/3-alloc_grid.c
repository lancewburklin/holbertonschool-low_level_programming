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
	newarray = (int **)malloc(width * sizeof(int *));
	if (newarray == NULL)
		return (NULL);
	for (c = 0; c < width; c++)
	{
		newarray[c] = (int *)malloc(height * sizeof(int));
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
