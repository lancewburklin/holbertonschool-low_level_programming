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

	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);
	printf("%d\n", a[n - 1]);
}
