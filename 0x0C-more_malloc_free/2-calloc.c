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

	if (nmemb == 0 || size == 0)
		return (NULL);
	ar = malloc(nmemb * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		ar[i] = 0;
	return (ar);
}
