#include "lists.h"

/**
 * dlistint_len - Finds the length of a list
 * @h: The head of the list
 *
 * Return: length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
