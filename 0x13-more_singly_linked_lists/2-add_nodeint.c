#include "lists.h"

/**
 * add_nodeint - Adds a node to the beginning of a list
 * @head: Head of the list
 * @n: Interger to set for the list
 *
 * Return: Address of node or NULL if fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
