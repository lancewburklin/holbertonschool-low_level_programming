#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Prints diagonal sum
 * @a: The array
 * @size: The size of the array
 *
 * Return: VOID
 */

void print_diagsums(int *a, int size)
{
	int i;
	int c = 0;

	for (i = 0; i < size; i++)
	{
		c = c + a[i * size + i];
	}
	printf("%d, ", c);
	c = 0;
	for (i = 1; i <= size; i++)
	{
		c = c + *(a + i * size - i);
	}
	printf("%d\n", c);
}
