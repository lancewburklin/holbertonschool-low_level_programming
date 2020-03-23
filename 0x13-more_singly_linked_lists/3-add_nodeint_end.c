#include "lists.h"

/**
 * add_nodeint_end - Adds a node to the end of the list
 * @head: Head of the list
 * @n: Interger for the new node
 *
 * Return: Address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *count = *head;

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (count == NULL)
	{
		*head = newnode;
		return (*head);
	}
	while (count->next != NULL)
	{
		count = count->next;
	}
	count->next = newnode;
	return (count);
}
