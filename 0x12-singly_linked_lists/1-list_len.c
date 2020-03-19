#include "lists.h"

/**
 * list_len - Lists the length of a list
 * @h: The head of the list
 *
 * Return: The length of the list
 */

size_t list_len(const list_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
