#include "lists.h"

/**
 * insert_dnodeint_at_index - Adds a node at an idex
 * @h: Head of the list
 * @idx: Index
 * @n: Value to store
 *
 * Return: new node address
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *count;
	unsigned int i = 0;

	if (*h == NULL)
	{
		add_dnodeint_end(h, n);
		return (*h);
	}
	count = *h;
	while (i < idx - 1 && count->next != NULL)
	{
		count = count->next;
		i++;
	}
	if (idx - 1 > i)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = count->next;
	new_node->prev = count;
	count->next = new_node;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	new_node->n = n;
	return (new_node);
}
