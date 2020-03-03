#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Creates an array
 * @size: Size of the array
 * @c: Character to initialize it with
 *
 * Return: The array
 */

char *create_array(unsigned int size, char c)
{
	char *newarray;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	newarray = malloc(size);
	if (newarray == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		newarray[i] = c;
	}
	return (newarray);
}
