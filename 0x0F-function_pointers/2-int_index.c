#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - Searches for an interger
 * @array: The array of elements
 * @size: size of the array
 * @cmp: Function to use
 *
 * Return: -1 for a fail or instance where number matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, n;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		n = cmp(array[i]);
		if (n != 0)
			return (i);
	}
	return (-1);
}
