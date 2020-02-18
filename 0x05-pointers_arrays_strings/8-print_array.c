#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Prints an array
 * @a: Name of the array
 * @n: Number of elements
 *
 */

void print_array(int *a, int n)
{
	int i;

	printf("%d", a[0]);
	for (i = 1; i < n; i++)
		printf(", %d", a[i]);
	printf("\n");
}
