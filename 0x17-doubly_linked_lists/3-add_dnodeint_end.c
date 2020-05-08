#include "lists.h"

/**
 * add_dnodeint_end - Adds a node to the end of a doubly linked list
 * @head: Head of the list
 * @n: Integer to assign to the new node
 *
 * Return: The new node or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->n = n;
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	new_node->next = NULL;
	new_node->n = n;
	return (new_node);
}
