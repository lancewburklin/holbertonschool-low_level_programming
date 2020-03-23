#include "lists.h"

/**
 * listint_len - Finds the length of a list
 * @h: Head of the list
 *
 * Return: Length of the list
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
