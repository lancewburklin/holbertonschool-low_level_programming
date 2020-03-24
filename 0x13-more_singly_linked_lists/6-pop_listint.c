#include "lists.h"

/**
 * pop_listint - Removes the beginnign of a list
 * @head: The head of the list
 *
 * Return: value of the node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int headnum = (*head)->n;

	if (*head == NULL)
		return (0);
	(*head) = temp->next;
	free(temp);

	return (headnum);
}
