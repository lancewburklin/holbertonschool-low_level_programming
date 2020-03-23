#include "lists.h"

/**
 * print_listint - Prints an interger list
 * @h: The head of the lis to print
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
