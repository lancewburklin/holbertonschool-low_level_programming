#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: The head of the list
 *
 * Return: VOID
 */

void free_listint(listint_t *head)
{
	listint_t *count = head;

	while(head != NULL)
	{
		count = head;
		free (count);
		head = head->next;
	}
}
