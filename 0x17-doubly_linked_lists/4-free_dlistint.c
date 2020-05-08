#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list of integers
 * @head: Head of the list
 *
 * Return: Returns nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *freednode;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		freednode = head;
		head = head->next;
		free(freednode);
	}
	free(head);
}
