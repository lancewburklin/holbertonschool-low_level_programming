#include "holberton.h"

/**
 * reverse_array - Reverses an array
 * @a: The array
 * @n: Number of elements to swap
 *
 * Return: VOID
 */

void reverse_array(int *a, int n)
{
	int y = 0;

	n--;
	while (n > y)
	{
		int first = a[y];
		int second = a[n];

		a[y] = second;
		y++;
		a[n] = first;
		n--;
	}
}
