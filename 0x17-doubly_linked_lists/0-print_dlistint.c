#include "lists.h"

/**
 * print_dlistint - Prints a doubly linked lists of integers
 * @h: Head of the list
 *
 * Return: the length of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
