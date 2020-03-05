#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Makes an array
 * @min: Minimum number
 * @max: Max number
 *
 * Return: The array
 */

int *array_range(int min, int max)
{
	int *ar;

	if (min > max)
		return (NULL);
	if (min == 0)
		ar = malloc((max + 1) * sizeof(int));
	else
		ar = malloc(max * sizeof(int));
	if (ar == NULL)
		return (NULL);
	for (; min <= max; min++)
	{
		ar[min] = min;
	}
	return (ar);
}
