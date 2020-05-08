#include "lists.h"

/**
 * get_dnodeint_at_index - Gets a node at an index
 * @head: Head of the list
 * @index: Index to look for
 *
 * Return: The node or Null for fail
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (i < index && temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (i < index)
		return (NULL);
	return (temp);
}
