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
	int i = 0;
	int *ar;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(int) * (max - min + 1));
	if (ar == NULL)
		return (NULL);
	for (; min <= max; min++, i++)
	{
		ar[i] = min;
	}
	return (ar);
}
