#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checed - Makes a new array
 * @b: The size of the array
 *
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	int *newarray = malloc(b);

	if (newarray == NULL)
		exit(98);
	return (newarray);
}
