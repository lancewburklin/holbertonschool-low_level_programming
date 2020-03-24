#include "lists.h"

/**
 * free_listint2 - Frees a list and sets it to null
 * @head: Head of th list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *place = *head;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		place = (*head)->next;
		free(*head);
		*head = place;
	}
	*head = NULL;
}
