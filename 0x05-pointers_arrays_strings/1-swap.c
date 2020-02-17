#include "holberton.h"

/**
 * swap_int - Swamps two intergers
 * @a: Interger one
 * @b: Second interger
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int a1 = *a;
	int b1 = *b;

	*a = b1;
	*b = a1;
}
