#include "lists.h"

/**
 * add_dnodeint - Adds a node to the beginning of a doubly linked list
 * @head: Head of the list
 * @n: Value to assign to the node
 *
 * Return: The node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	new_node->next->prev = new_node;
	*head = new_node;
	return (*head);
}
