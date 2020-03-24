#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at index
 * @head: head of the list
 * @idx: Index
 * @n: Interger
 *
 * Return: Address or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	unsigned int count = 0;
	listint_t *new;
	listint_t *save = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		*head = new;
		return (new);
	}
	while (temp != NULL)
	{
		if (count == idx)
			break;
		count ++;
		*head = temp;
		temp = temp->next;
	}
	(*head)->next = new;
	new->next = temp;
	*head = save;
	return (new);
}
