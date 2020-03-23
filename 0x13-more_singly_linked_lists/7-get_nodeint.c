#include "lists.h"

/**
 * get_nodeint_at_index - Gets a node at an index
 * @head: Head of the list
 * @index: The node to find
 *
 * Return: The location of the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head->next != NULL && count <= index)
	{
		head = head->next;
		count++;
	}
	if (index > count)
		return (NULL);
	return (head);
}