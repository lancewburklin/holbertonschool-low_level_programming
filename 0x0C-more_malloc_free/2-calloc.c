#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Works like malloc but sets everything to 0
 * @nmemb: element of the array
 * @size: Size of the bytes
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ar;

	ar = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ar[i] = 0;
	return (ar);
}
