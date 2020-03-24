#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at an index
 * @head: Head of the list
 * @index: Index to delete at
 *
 * Return: 1 on success and -1 for a fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = *head;
	listint_t *temp2;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp2 = temp->next;
		*head = temp2;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		if (count + 1 == index)
		{
			temp2 = temp->next;
			temp->next = temp2->next;
			free(temp2);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
